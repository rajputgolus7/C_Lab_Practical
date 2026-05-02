#include <stdio.h>
#include <math.h>

// Name: Golu Kumar Singh
// Roll No: 2510990132

int main() {
    int choice;

    printf("Choose an equation to evaluate:\n");
    printf("1. V = u + at\n");
    printf("2. S = ut + 0.5 * a * t^2\n");
    printf("3. T = 2a + sqrt(b) + 9c\n");
    printf("4. H = sqrt(b^2 + p^2)\n");
    printf("Enter your choice (1 to 4): ");
    scanf("%d", &choice);

    switch (choice) {

        case 1: {
            int u, a, t, V;

            printf("Enter values of u, a, and t: ");
            scanf("%d %d %d", &u, &a, &t);

            V = u + a * t;
            printf("Result (V) = %d\n", V);
            break;
        }

        case 2: {
            float u, a, t, S;

            printf("Enter values of u, a, and t: ");
            scanf("%f %f %f", &u, &a, &t);

            S = u * t + 0.5 * a * t * t;
            printf("Result (S) = %.2f\n", S);
            break;
        }

        case 3: {
            float a, b, c, T;

            printf("Enter values of a, b, and c: ");
            scanf("%f %f %f", &a, &b, &c);

            T = 2 * a + sqrt(b) + 9 * c;
            printf("Result (T) = %.2f\n", T);
            break;
        }

        case 4: {
            float b, p, H;

            printf("Enter values of b and p: ");
            scanf("%f %f", &b, &p);

            H = sqrt(b * b + p * p);
            printf("Result (H) = %.2f\n", H);
            break;
        }

        default:
            printf("Invalid input. Please enter a number between 1 and 4.\n");
    }

    return 0;
}
