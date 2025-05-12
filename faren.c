#include <stdio.h>

int main()
{
    int celsius, fahrenheit; // Corrected variable name (farenheit -> fahrenheit)
    printf("Enter the Celsius temperature: ");
    scanf("%d", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32; // Formula for Celsius to Fahrenheit
    printf("The Fahrenheit temperature is: %d\n", fahrenheit); // Print the result

    return 0;
}
