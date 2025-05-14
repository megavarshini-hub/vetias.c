#include <stdio.h>

int main() {
    int value1, value2;

    // Ask user to input two values
    printf("Enter first value: ");
    scanf("%d", &value1);

    printf("Enter second value: ");
    scanf("%d", &value2);

    // Check if values are equal
    if (value1 == value2) {
        printf("The values are equal.\n");
    } else {
        printf("The values are not equal.\n");
    }

    return 0;
}
