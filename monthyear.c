#include <stdio.h>

int main()
{
    int  month, year;
    printf("Enter month number (1-12):");
    scanf("%d",&month);
    printf("Enter year:");
    scanf("%d",&year);
    switch (month) {
        case 1: case  3: case 5: case 7: case 8: case 10: case 12:
        printf("31 days\n");
        break;
        case 4: case  6: case 9: case 11: 
        printf("30 days\n");
        break;
        case 2:
        if ((year% 4==0 && year%100 !=0) || (year %400 == 0))
        printf ("29 days(leap year)\n");
        else
        printf ("28 days( not leap year)\n");
        break;
        default:
        printf("invalid input");
        break;
    
    }
    

    return 0;
}
