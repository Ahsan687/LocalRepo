/* programe_43 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// name of the arg of the function not matter 
#include <stdio.h>

// Function prototype declaration
float cal(float x, float y);

// Function definition for cal function
float cal(float x, float y) {
    float z;
    z = x + y;
    return z; // Return the sum of x and y
}
int main() {
    float a, b, c;
    
    // Input values for a and b
    printf("Enter the values of a and b separated by space: ");
    scanf("%f %f", &a, &b);
    
    // Call cal function and store the result in c
    c = cal(a, b);
    
    // Print the result
    printf("Sum of %f and %f = %f\n", a, b, c);
    
    return 0;
}