/*Create a structure for 2D points, called point - with int x and int y as data members of the structure. Write the code in main() to create a pointer “ptr” of type pointer to struct point, and allocate the memory for it dynamically.
a. Assign the values for x and y and print the values.
*/

#include<stdio.h>

struct point {

        int x;
        int y;
};

main() {

    struct point *ptr=(int*)malloc(1*sizeof(int));

    printf("Enter the values for x and y ::");
    scanf("%d\n%d",&ptr->x,&ptr->y);

    printf("The values for x=%d and y=%d\n",ptr->x,ptr->y);
}

