/*Write a program to accept 2 numbers from the user, then compare which is the bigger one and
print the biggest of these two numbers.
*/

#include<stdio.h>

int main() {

	int num1,num2;

	printf("Enter two numbers ::");
	scanf("%d\n%d",&num1,&num2);

	if(num1>num2) {

		printf("The first number is bigger\n");
	}
	else {

		printf("The second number is bigger\n");
	}
}

