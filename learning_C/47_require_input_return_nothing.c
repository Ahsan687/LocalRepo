/* programe_47 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// user defined function require imput return nothing
#include <stdio.h>

// Function prototype declaration
void cal(float x, float y);

// Function definition for cal function
void cal(float x, float y) 
{
    float z;
    z = x + y;
    printf("Value of %f + %f = %f\n", x, y, z);
}

int main() 
{
    float x, y;
    printf("Enter the value of x and y: ");
    scanf("%f %f", &x, &y);
    
    // Function call with actual values
    // cal(x, y);

    return 0;
}
