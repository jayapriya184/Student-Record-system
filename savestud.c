#include "header.h"
void stud_save(void)
{
    FILE *fp;
    ST *temp;
    fp=fopen("student.dat","w");
    if(fp==NULL)
    {
        printf("File Cannot Be Opened\n");
        return;
    }
    for(temp=hptr;temp!=NULL;temp=temp->next)
    {
        fprintf(fp,"%d %s %.2f\n",temp->rollno,temp->name,temp->percentage);
    }
    fclose(fp);
    printf("\nRecords Saved Successfully\n");
}

void stud_load(void)
{
    FILE *fp;
    ST *temp;
    ST *ptr;
    fp=fopen("student.dat","r");
    if(fp==NULL)
        return;
    while(1)
    {
        temp=malloc(sizeof(ST));
        if(temp==NULL)
            break;
        if(fscanf(fp,"%d %s %f",&temp->rollno,temp->name,&temp->percentage)!=3)
        {
            free(temp);
            break;
        }
        temp->next=NULL;
        if(hptr==NULL)
        {
            hptr=temp;
        }
        else
        {
            ptr=hptr;
            while(ptr->next!=NULL)
                ptr=ptr->next;
            ptr->next=temp;
        }
    }
    fclose(fp);
}
