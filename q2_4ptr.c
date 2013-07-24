/*Declare an integer array, “arr”, containing 3 elements, initialized to 10, 20 and 30. Now, declare
a pointer, “ptr” of type pointer to integer. Let this pointer point to the address of the integer
array “arr”.
a. Print the values in the array using the variable “arr”.
b. Using the pointer, change the value of the 2nd element to 100.
c. Print the values in the array using the pointer “ptr”
*/

#include<stdio.h>

main() {
    
    int arr[3]={10,20,30};
    int *ptr,i;
    
    ptr=arr;

    printf("The values in the array using the variable arr ::");

    for(i=0;i<3;i++) {

    printf(" %d\t",arr[i]); 
    
    }

    printf("\n");
    
    ptr++;
    *ptr=100;
    
    printf("The value of second element is %d\n",*ptr);

    printf("The value in the array using the pointer ::%d\t%d\t%d\n",*(ptr-1),*(ptr),*(ptr+1));
}
