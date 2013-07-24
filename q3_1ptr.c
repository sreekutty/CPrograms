/*Declare a pointer to an integer called address.
  Assign the address of a float variable balance to the float pointer temp.
  Assign the character value 'W' to the variable pointed to by the char pointer letter.
  Declare a pointer to the text string "Hello" called message.
*/

#include<stdio.h>
#include<string.h>

main() {

    int *address;
    float *temp,balance;
    char *letter,ch,*message,cha[6];

    ch='W';
    strcpy(cha,"Hello");
    message=cha;
    letter=&ch;
    temp=&balance;

    printf("Address of the float variable balance %d\n",&balance);
    printf("Character value ::%c\n",*letter);
    printf("Text string is %s\n",message);
}

