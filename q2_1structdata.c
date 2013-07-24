/*Write a program to accept name and roll number of students from the terminal. Store these data in a structure variable of type “struct stude    nt” and print the details.
 */

#include<stdio.h>

main() {

    struct student {
        char name[20];
        int roll_no;
    }stud;

    printf("Enter the name and roll number ::");
    scanf("%s\n%d",stud.name,&stud.roll_no);

    printf("Roll No:\tNAME\n-------------------------\n%d\t\t%s\n",stud.roll_no,stud.name);
}
