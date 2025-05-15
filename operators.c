#include <stdio.h>

int main()
{
    char operator;
    double num1, num2, result;
    printf("Enter an operator(+, - ,* ,/):");
    scanf("%c" , &operator);
    printf("enter two operands:");
    scanf("%lf %lf", &num1, &num2);
    switch(operator) {
        case'+':
        result= num1+num2;
        printf("Result: %.2lf\n", result);
        break;
        
        case'-':
        result= num1-num2;
        printf("Result: %.2lf\n", result);
        break;
        
        case'*':
        result= num1*num2;
        printf("Result: %.10lf\n", result);
        break;
        
        case'/':
        result= num1/num2;
        printf("Result: %.10lf\n", result);
        break;
        
        
        
        
    }

    return 0;
}
