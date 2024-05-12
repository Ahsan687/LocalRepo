/* programe_44 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
//multiple_variables_in_user_defined_fnc
#include <stdio.h>

// Function prototype declaration
float cal(float x, float y);

// Function definition for cal function
float cal(float p, float q) {
    float r;
    r = p + q;
    return r;
}

int main() {
    float a = 2, b = 3, c = 4, d = 5;
    float x, y, z;
    
    // Perform calculations and store results
    x = cal(a, b);
    y = cal(b, c);
    z = cal(c, d);
    
    // Print the results
    printf("Result of x: %f\n", x);
    printf("Result of y: %f\n", y);
    printf("Result of z: %f\n", z);
    
    return 0;
}
