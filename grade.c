#include <stdio.h>

int main()
{
    int s1,s2,s3,s4,s5,total,avg;
    printf("enter the mark of s1:");

     scanf("%d",&s1);
     printf("enter the mark of s2:");
      scanf("%d",&s2);
printf("enter the mark of s3:");
 scanf("%d",&s3);
printf("enter the mark of s4:");
 scanf("%d",&s4);
printf("enter the mark of s5:");
 scanf("%d",&s5);
 total= s1+s2+s3+s4+s5;
 printf("total mark is  %d",total);
 avg= total/5;
 printf("avg is %d",avg);
 if (avg>= 90&&avg<=80)
 {
     printf("gradeA");
    }
    else if(avg>= 30&&avg<=70)
    {
        printf("gradeB");
    }

    return 0;
}
