#include <stdio.h>

// Name: Golu Kumar Singh
// Roll No: 2510990132

int main() {
    int a = 0, b = 0, temp;

    // Input
    printf("Enter two integers to swap: ");
    scanf("%d %d", &a, &b);

    // Swapping using temporary variable
    temp = a;
    a = b;
    b = temp;

    // Output
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
