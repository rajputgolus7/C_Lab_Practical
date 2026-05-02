#include <stdio.h>
#include <ctype.h>

// Name: Golu Kumar Singh
// Roll No: 2510990132

// Function to check vowel or consonant
void checkAlphabet(char ch) {
    ch = tolower(ch);

    if (ch >= 'a' && ch <= 'z') {
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
            printf("Result: It is a vowel.\n");
        else
            printf("Result: It is a consonant.\n");
    } else {
        printf("Invalid input. Not an alphabet.\n");
    }
}

// Function to classify number
void classifyNumber(int num) {
    if (num == 0)
        printf("Result: The number is zero.\n");
    else if (num > 0)
        printf("Result: The number is positive.\n");
    else
        printf("Result: The number is negative.\n");
}

int main() {

    char ch;
    int num;

    // Alphabet check
    printf("Enter any single alphabet character: ");
    scanf(" %c", &ch);
    checkAlphabet(ch);

    // Number check
    printf("\nEnter any integer value: ");
    scanf("%d", &num);
    classifyNumber(num);

    return 0;
}
