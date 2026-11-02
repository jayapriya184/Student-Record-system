#include "header.h"
void stud_sort(void)
{
    ST *temp;
    ST *ptr;
    int roll;
    char name[100];
    float percentage;
    char ch;
    printf("N/n: Sort by Name\n");
    printf("P/p: Sort by Percentage\n");
    printf("Enter Your Choice:");
    scanf(" %c",&ch);
    for(temp=hptr;temp!=NULL;temp=temp->next)
    {
        for(ptr=temp->next;ptr!=NULL;ptr=ptr->next)
        {
            if((ch=='N'||ch=='n')&&strcmp(temp->name,ptr->name)>0)
            {
                roll=temp->rollno;
                temp->rollno=ptr->rollno;
                ptr->rollno=roll;

                strcpy(name,temp->name);
                strcpy(temp->name,ptr->name);
                strcpy(ptr->name,name);
                
		percentage=temp->percentage;
                temp->percentage=ptr->percentage;
                ptr->percentage=percentage;
            }
            if((ch=='P'||ch=='p')&&temp->percentage>ptr->percentage)
            {
                roll=temp->rollno;
                temp->rollno=ptr->rollno;
                ptr->rollno=roll;
                
		strcpy(name,temp->name);
                strcpy(temp->name,ptr->name);
                strcpy(ptr->name,name);
                
		percentage=temp->percentage;
                temp->percentage=ptr->percentage;
                ptr->percentage=percentage;
	    }
        }
    }

    printf("Records Sorted Successfully\n");
    stud_show();
}
