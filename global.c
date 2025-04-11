#include <stdio.h>

// Global variable (accessible from all functions)
int globalVar = 100;

// Function prototype
void displayValues(int formalParam);

int main() {

    // Local variable (accessible only inside main function)
    int localVar = 50;

    // Displaying values of global and local variables
    printf("Inside main function: \n");
    printf("Global Variable: %d\n", globalVar);
    printf("Local Variable: %d\n", localVar);

    // Calling function and passing a value
    displayValues(localVar);

    return 0;
}

// Function to display values (demonstrating formal parameters)
void displayValues(int formalParam) {

    // Local variable inside the function
    int anotherLocalVar = 25;

    printf("\nInside displayValues function:\n");

    printf("Global Variable: %d\n", globalVar); // Accessible

    printf("Formal Parameter: %d\n", formalParam); // Passed from main

    printf("Local Variable: %d\n", anotherLocalVar); // Only inside this function
}
