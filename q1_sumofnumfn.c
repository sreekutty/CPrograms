/*Write a program to accept two number (integers),after accepting the numbers, find the sum of squares of those numbers using a function, named “sumOfSquares”. Use only pass by value. The function returns the result to the main, where the result is printed.
*/

#include<stdio.h>

main() {

	int num1,num2,result;

	printf("Enter two numbers ::");
	scanf("%d\n%d",&num1,&num2);

	result=sumOfsquares(num1,num2);

	printf("Sum of squares of two numbers=%d\n",result);

}

int sumOfsquares(int num1,int num2) {

	int n1,n2,sum;
	
	n1=num1;
	n2=num2;
        sum=(n1*n1)+(n2*n2);

	return sum;

}
	

