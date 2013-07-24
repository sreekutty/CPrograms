/*Create a structure variable, “student1”, of the type as said in question 1. Now initialize the
  structure using user inputs. Pass this structure to a function, called “changeName”, using
  passing by reference. In the function, change the value in the “name” field of the passed
  structure to “Amrita”. This function doesn’t return any values. In the main, print the values in
  the structure.
*/

#include<stdio.h>
#include<string.h>

    struct student1 {
        char name[20];
        int roll_no;
    }stud;

    void changeName(struct student1 *studptr) {
            
        studptr=&stud;
        strcpy(studptr->name,"Amrita");
    }

main() {

    printf("Enter a name ::");
    scanf("%s",stud.name);

    changeName(&stud);
    printf("Change the value in the “name” field of the passed structure to Amrita::%s\n",stud.name);
}
