#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void printGreeting();
int addNumbers(int a, int b);

int main() {
    int num1, num2, sum;

    // Print a greeting message
    printGreeting();

    // Prompt the user for input
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        fprintf(stderr, "Error reading input.\n");
        return EXIT_FAILURE;
    }

    // Add the numbers
    sum = addNumbers(num1, num2);

    // Print the result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    // Simple loop example
    printf("Counting from 1 to 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    return EXIT_SUCCESS;
}

// Function to print a greeting message
void printGreeting() {
    printf("Welcome to the C Programming Boilerplate!\n");
}

// Function to add two numbers
int addNumbers(int a, int b) {
    return a + b;
}
