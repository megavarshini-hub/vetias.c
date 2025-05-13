#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the first num:");

     scanf("%d",&a);
     printf("enter the second num:");
      scanf("%d",&b);
printf("enter the third num:");
 scanf("%d",&c);
 if (a>b && a>c)
 {
     printf("a is greater");
    }
    else if(b>c && b>a)
    {
        printf("b is greater");
    }
    else 
    {
    printf(" c is greater");
    }

    return 0;
}
