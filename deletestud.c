#include "header.h"
void stud_del(void)
{
    ST *temp;
    ST *prev;
    int roll;
    char name[100];
    char choice;
    int found=0;
    printf("\nR/r: Delete by Roll Number");
    printf("\nN/n: Delete by Name");
    printf("\nEnter Your Choice:");
    scanf(" %c", &choice);
    if(choice=='R'||choice=='r')
    {
        printf("Enter Roll Number:");
        scanf("%d",&roll);
    }
    else if(choice=='N'||choice=='n')
    {
        printf("Enter Student Name:");
        scanf(" %[^\n]",name);
        for(temp=hptr;temp!=NULL;temp=temp->next)
        {
            if(strcmp(temp->name,name)==0)
            {
                printf("\nRoll No: %d  Name: %s  Percentage: %.2f",temp->rollno,temp->name,temp->percentage);
                found=1;
            }
        }
        if(found==0)
        {
            printf("\nRecord Not Found\n");
            return;
        }
        printf("\nEnter Roll Number to Delete:");
        scanf("%d",&roll);
    }
    else
    {
        printf("\nInvalid Choice\n");
        return;
    }
    temp=hptr;
    prev=NULL;
    while(temp!=NULL)
    {
        if(temp->rollno==roll)
        {
            if(prev==NULL)
                hptr=temp->next;
            else
                prev->next=temp->next;
            free(temp);
            printf("\nRecord Deleted Successfully\n");
            return;
        }
        prev=temp;
        temp=temp->next;
    }
    printf("\nRecord Not Found\n");
}
