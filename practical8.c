#include <stdio.h>

// Name: Golu Kumar Singh
// Roll No: 2510990132

int main() {
    int a = 0, b = 0, c = 0;
    int greatest_ifelse, greatest_ternary;

    // Input
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Using if-else
    if (a >= b && a >= c)
        greatest_ifelse = a;
    else if (b >= c)
        greatest_ifelse = b;
    else
        greatest_ifelse = c;

    printf("\nResult using if-else method:\n");
    printf("Greatest number = %d\n", greatest_ifelse);

    // Using ternary operator
    greatest_ternary = (a >= b && a >= c) ? a :
                       (b >= c) ? b : c;

    printf("\nResult using ternary operator:\n");
    printf("Greatest number = %d\n", greatest_ternary);

    return 0;
}
