//C functions
#include <stdio.h>

// Function to check if a number is even or odd
void checkEvenOrOdd(int number) {
    if (number % 2 == 0) {
        printf("The number is even\n");
    } else {
        printf("The number is odd\n");
    }
}

int main() {
    int num;

    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the function
    checkEvenOrOdd(num);

    return 0;
}
