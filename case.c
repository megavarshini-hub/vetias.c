#include <stdio.h>

int main()
{
    int choice;
    scanf("%d",&choice);
    switch(choice)
    { 
        case 1: printf("sunday");
        break;
        case 2: printf("mondaY");
        break;
        case 3: printf("tuesday");
        break;
        case 4: printf("wednesday");
        break;
        case 5: printf("thursday");
        break;
        case 6: printf("friday");
        break;
        case 7: printf("saturday");
        break;
        default: printf("invalid input");
    }
        
