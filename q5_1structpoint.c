/*A structure named “point” represents a point in a plane. It contains two fields - x and y - both integers. Create a variable of type struct point, called “centerPoint”. In main accept the x and y values and store it in “centerPoint”. From main, pass this structure to the function “movePoint” by value.
  a. Write a function, “movePoint”, which accepts one argument of type struct point.
  It changes the x and y value of the passed structure. After that it returns the struct variable.
  b. In main, write code to accept the returned value from this function and print the output (value of x and y).
*/

#include<stdio.h>

struct point {

    int x;
    int y;
}centerpoint;

struct point movePoint(struct point pt) {
    
    printf("Changes the values for x and y ::");
    scanf("%d\n%d",&pt.x,&pt.y);
    return pt;
}

main() {

    printf("Enter the values for x and y ::");
    scanf("%d\n%d",&centerpoint.x,&centerpoint.y);

    centerpoint=movePoint(centerpoint);

    printf("\nThe returned value from the function\n...............................................\nie..Value of x=%d and y=%d\n",centerpoint.x,centerpoint.y);
    

}    
    

    

