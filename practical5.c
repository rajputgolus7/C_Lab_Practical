#include <stdio.h>

// Name: Golu Kumar Singh
// Roll No: 2510990132

int main() {
    float radius = 0.0;
    const float PI = 3.1416;

    // Input
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Processing
    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;

    // Output
    printf("Area of the circle = %.2f\n", area);
    printf("Circumference of the circle = %.2f\n", circumference);

    return 0;
}
