/*Create an integer pointer and allocate 4 bytes of memory for this pointer dynamically.
  a. Assign a value, 10, to this memory location and print the value.
*/

#include<stdio.h>
#include<stdlib.h>

main() {

    int *ptr;

    ptr=(int*)malloc(1*sizeof(int));
    ptr=10;

    printf("The value in the memory location ::%d\n",ptr);
}


