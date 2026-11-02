#include "header.h"
void stud_mod(void)
{
    ST *temp;
    int roll;
    int found=0;
    char ch;
    char name[100];
    float percentage;
    printf("\nR/r: Search by Roll Number");
    printf("\nN/n: Search by Name");
    printf("\nP/p: Search by Percentage");
    printf("\nEnter Your Choice:");
    scanf(" %c",&ch);
    if(ch=='R'||ch=='r')
    {
        printf("Enter Roll Number:");
        scanf("%d",&roll);
    }
    else if(ch=='N'||ch=='n')
    {
        printf("Enter Student Name:");
        scanf(" %[^\n]",name);
        for(temp=hptr;temp!=NULL;temp=temp->next)
        {
            if(strcmp(temp->name,name)==0)
            {
                printf("\nRoll No: %d",temp->rollno);
                printf("\tName: %s",temp->name);
                printf("\tPercentage: %.2f\n",temp->percentage);
                found=1;
            }
        }
        if(found==0)
        {
            printf("Student Not Found\n");
            return;
        }
        printf("Enter Roll Number to Modify:");
        scanf("%d",&roll);
    }
    else if(ch=='P'||ch=='p')
    {
        printf("Enter Percentage:");
        scanf("%f", &percentage);
        for(temp=hptr;temp!=NULL;temp=temp->next)
        {
            if(temp->percentage==percentage)
            {
                printf("\nRoll No: %d",temp->rollno);
                printf("\tName: %s",temp->name);
                printf("\tPercentage: %.2f\n",temp->percentage);
                found=1;
            }
        }
        if(found==0)
        {
            printf("Record Not Found\n");
            return;
        }
        printf("Enter Roll Number to Modify:");
        scanf("%d",&roll);
    }
    else
    {
        printf("Invalid Choice\n");
        return;
    }
    for(temp=hptr;temp!=NULL;temp= temp->next)
    {
        if(temp->rollno==roll)
        {
            printf("\nN/n: Modify Name");
            printf("\nP/p: Modify Percentage");
            printf("\nEnter Your Choice:");
            scanf(" %c",&ch);
            if(ch=='N'||ch=='n')
            {
                printf("Enter New Name:");
                scanf(" %[^\n]",temp->name);
            }
            else if(ch=='P'||ch=='p')
            {
                printf("Enter New Percentage:");
                scanf("%f",&temp->percentage);
            }
            else
            {
                printf("Invalid Choice\n");
                return;
            }
            printf("\nRecord Modified Successfully\n");
            return;
        }
    }
    printf("\nRecord Not Found\n");
}
