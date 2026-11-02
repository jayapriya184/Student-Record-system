
#include "header.h"

void stud_show(void)
{
    ST *temp;

    temp=hptr;

    if(temp==NULL)
    {
        printf("\nNo Records Found\n");
        return;
    }

    printf("\n----------------------------------------------\n");
    printf("Roll No\t\tName\t\tPercentage\n");
    printf("----------------------------------------------\n");

    while(temp!=NULL)
    {
        printf("%d\t\t%s\t\t%.2f\n",
        temp->rollno,temp->name,temp->percentage);

        temp=temp->next;
    }

    printf("----------------------------------------------\n");
}

