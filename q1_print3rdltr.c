/*Write a program to accept a string (say, a person’s name) and store it in a char array of size 20.
Print the name starting from the 3rd letter.
(E.g: If the user enters - ”Sujith”, the program will print - “jith”)
*/

#include<stdio.h>
#include<string.h>

int main() {

	char c[20],x[20];
        int i=0,l,j=0;
	
	
	printf("Enter a string ::");
	scanf("%s",c);
	printf("The entered string is %s\n\n",c);
	l=strlen(c);
        printf("String length is %d\n\n",l);

        for(i=2;i<=l;i++) {
	
		x[j]=c[i];
		j++;
	}

	printf("The name starting from the 3rd letter is %s\n\n",x);
	
}
