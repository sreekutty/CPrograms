/*Write a program to accept name and roll number of students from the terminal. Store these data in a structure variable of type “struct student” and print the details,declare a pointer of type “struct student” and point it to the declared structure variable. Use the pointer variable to print the details of the student.
*/

#include<stdio.h>

void main() {

        struct student {
            char name[20];
            int roll_no;
        };

        struct student *studptr,stud;
        studptr=&stud;

        printf("Enter the name and roll number ::");
        scanf("%s\n%d",studptr->name,&studptr->roll_no);

        printf("Roll NO:\tName\n-----------------------\n%d\t\t%s\n",studptr->roll_no,studptr->name);
}
