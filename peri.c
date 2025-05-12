#include <stdio.h>
int main()
 {
    int length, breadth, area, peri;
    
    printf (" enter the length of rectangle:");
    scanf("%d" , &length);
    
    printf (" enter the breadth of a rectangle:");
    scanf("%d" , &breadth);
    
     area = (length * breadth);
     printf("The area of the rectangle is: %d\n", area);
    
    peri = 2*(length+breadth);
    printf ("the peri of the rectangle is: %d/\n",peri);
    
    return 0;
    
 }
