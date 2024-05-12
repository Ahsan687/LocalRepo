/* programe_45 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// a simple calculator using user defined function
#include <stdio.h>

// Function prototype declarations
float add(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);

// Function definitions for arithmetic operations
float add(float x, float y) {
    return x + y;
}

float subtract(float x, float y) {
    return x - y;
}

float multiply(float x, float y) {
    return x * y;
}

float divide(float x, float y) {
    return x / y;
}
int main() 
{
    float a, b, result;
    char operation;

    // Input values from the keyboard
    printf("Enter two numbers separated by spaces: ");
    scanf("%f %f", &a, &b);

    // Choose operation from the keyboard
    printf("Choose operation (+, -, *, /): ");
    scanf(" %c", &operation);

    // Perform calculations based on operation
    switch (operation) {
        case '+':
            result = add(a, b);
            break;
        case '-':
            result = subtract(a, b);
            break;
        case '*':
            result = multiply(a, b);
            break;
        case '/':
            // Check if the denominator is zero
            if (b == 0) {
                printf("Error: Division by zero.\n");
                return 1;
            }
            result = divide(a, b);
            break;
        default:
            printf("Invalid operation.\n");
            return 1;
    }

    // Print the result
    printf("Result: %f\n", result);
    
    return 0;
}
