#include <stdio.h>

int main()
{
    int si,p,r,t;
    printf("enter the principal amoumt:");
    scanf("%d", &p);
     printf("enter the rate of interest:");
     scanf("%d", &r);
     printf("enter the time:");
     scanf("%d", &t);
     si= (p*r*t)/100;
     printf("Simple Interest = %d\n", si);

     
     
    

    return 0;
}
