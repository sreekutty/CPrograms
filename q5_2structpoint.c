/*A structure named “point” represents a point in a plane. It contains two fields - x and y - both integers. Create a variable of type struct point, called “centerPoint”. In main accept the x and y values and store it in “centerPoint”.
a. Now, write a function - movePoint - which accepts one parameter of type pointer to struct point. Inside the function, the value of the variable pointed to by the pointer is incremented by one - both x and y. This function does not return any value.
*/

#include<stdio.h>

struct point {

    int x;
    int y;
}centerpoint;

void movePoint(struct point *ptr) {
    
    ptr->x=(ptr->x)+1;    
    ptr->y=(ptr->y)+1;
   

}

main() {

    printf("Enter the values for x and y ::");
    scanf("%d\n%d",&centerpoint.x,&centerpoint.y);
    
    movePoint(&centerpoint);
    
    printf("Incremented value for x=%d and y=%d\n",centerpoint.x,centerpoint.y);
}
