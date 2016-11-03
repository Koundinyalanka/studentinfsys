
#include <stdio.h>
#include <stdlib.h>

typedef struct student
  {
    int id,Marks10,Marks12,MarksUG,NoOfBacklogs;
    char name[31];
  }stu;


void addStudRecord();
void dislay_all();
void modifyStudentRecord();
void eligbilityList();
void displayStudentDetails(int);
void sort();

void main()
   {
   FILE *fp;
   int count=0,num;
   char password[10];
   stu s;
   int i,j,login_choice,menu_choice;

   printf("\n\n\n Log-in as:\n\n");
   printf("	1. STUDENT\n\n");
   printf("	2. ADMIN\n\n");
   printf(" Enter choice: ");
   scanf("%d", &login_choice);

   switch(login_choice)
   {
       case 1:

            fp=fopen("stud.txt", "rw");
            if(fp==NULL)
            {
                printf("\n\nSTUDENT LOG-IN");
                printf("\n\nEnter student number: ");
                scanf("%d",&num);
                displayStudentDetails(num);// Display the entered student information from file.
                getch();
            }
            else
                printf("Student file doesnot exist!!!!");

            break;
        case 2:
            printf("\n\nADMIN LOG-IN");
            printf("\n\nEnter password: ");
            fflush(stdin);
            gets(password);
            if(strcmp(password, "admin") == 0)
            {
                printf("\n\nYou have successfully logged-in! Press any key to continue...");
                getch();
                do
                {
                    printf("\n\nADMIN MENU:\n\n");
                    printf("\n1 -  Add student record\n");
                    printf("\n2 -  Display all entries\n");
                    printf("\n3 -  Modify student record\n");
                    printf("\n4 -  Display placement eligibility list\n");
                    printf("\n5 -  Search student based on student number\n");
                    printf("\n6 -  Display student records in descending order of their marks in UG\n");
                    printf("\n7 -  Log-out and Exit\n");
                    printf("\nEnter Choice: ");
                    scanf("%d", &menu_choice);
                    switch(menu_choice)
                    {
                        case 1:  addStudRecord();break;
                        case 2:  dislay_all();break;
                        case 3:  modifyStudentRecord();break;
                        case 4:  eligbilityList();break;
                        case 5:  printf("\n\nEnter student number: ");
                                 scanf("%d",&num);
                                 displayStudentDetails(num);
                        case 6:  sort();
                        case 7:  printf("\n\n\nThank you!");break;
                    }
                }while(menu_choice!=7);
            }
            else printf("\n\nInvalid password.");
            break;
   }

 }

void addStudRecord()
{
    // Write Code
}
void dislay_all()
{
    // Write Code
}
void modifyStudentRecord()
{
    // Write Code
}
void eligbilityList()
{
    // Write Code
}
void displayStudentDetails(int num)
{
    // Write Code
}
void sort()
{
    // Write Code
}


