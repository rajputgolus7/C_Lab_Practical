#include <stdio.h>

// Name: Golu Kumar Singh
// Roll No: 2510990132

int main() {
    int n;
    long sum;

    // Input
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Using formula instead of loop
    sum = (long)n * (n + 1) / 2;

    // Output
    printf("Sum of first %d natural numbers = %ld\n", n, sum);

    return 0;
}
