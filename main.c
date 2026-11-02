#include "header.h"
ST *hptr = NULL;
int main()
{
    char choice;
    char ch;
    stud_load();
    while(1)
    {
        printf("\nSTUDENT RECORD MENU:\n");
        printf("\nA/a: Add New Record");
        printf("\nD/d: Delete a Record");
        printf("\nS/s: Show the List");
        printf("\nM/m: Modify a Record");
        printf("\nV/v: Save");
        printf("\nT/t: Sort the List");
        printf("\nE/e: Exit");
        printf("\nEnter Your Choice:");
        scanf(" %c", &choice);
        switch(choice)
        {
            case 'A':
            case 'a':
                stud_add();
                break;
            case 'D':
            case 'd':
                stud_del();
                break;
            case 'S':
            case 's':
                stud_show();
                break;
            case 'M':
            case 'm':
                stud_mod();
                break;
            case 'V':
            case 'v':
                stud_save();
                break;
            case 'T':
            case 't':
                stud_sort();
                break;
            case 'E':
            case 'e':
                printf("\nS/s: Save and Exit");
                printf("\nE/e: Exit Without Saving");
                printf("\nEnter Your Choice: ");
                scanf(" %c",&ch);
                if(ch=='S'||ch=='s')
                {
                    stud_save();
                    return 0;
                }
                else if(ch=='E'||ch=='e')
                {
                    return 0;
                }
                else
                {
                    printf("\nInvalid Choice\n");
                }
                break;
            default:
                printf("\nInvalid Choice\n");
        }
    }
}
