/*Write a program, which has a char* variable which is initialized to the string “Beautiful life”.
  Now use a loop to print starting from 7th letter, i.e, it will print “ful life”.
  (Hint: you will have to use pointer arithmetic in the loop)
*/

#include<stdio.h>
#include<string.h>
 
main() {

    char *name="Beautiful life",ch[20];
    int l,i,j=0;
    
    l=strlen(name);

    for(i=6;i<=l;i++) {

        ch[j]=name[i];
        j++;
    }

    printf("Starting from 7th letter ::%s\n",ch);
}


        
