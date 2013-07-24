/*Write a program to accept two number (integers). Find the sum of square of     those numbers and print the result in the main. (Hint: Sum of squares of 3     and 3 = 2^2 + 3^2 )
 */
#include<stdio.h>
main() {
    int num1,num2,sqr1,sqr2,sum;

    printf("Enter two numbers::");
    scanf("%d\n%d",&num1,&num2);
    printf("\nThe numbers are %d %d",num1,num2);

    sqr1=num1*num1; /* Square of num1 */
    sqr2=num2*num2; /* Square of num2 */
    sum=sqr1+sqr2;  /* Sum of squares of two numbers */

    printf("\nSum of squares =%d\n",sum);
}
