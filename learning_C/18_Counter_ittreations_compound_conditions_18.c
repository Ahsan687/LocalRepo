/* programe_18 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// counter with ittrations multivariable compounded condition
#include <stdio.h>
int main()
{
    int x, y, z;

    // Input values of x, y, and z
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);
    printf("Enter value of z: ");
    scanf("%d", &z);

    // Initialize a counter
    int counter = 0;

    // Use a while loop to repeatedly check the condition
    while ((x > 0 && y > 0) || (z < 10 && x < y)) {
        printf("Condition satisfied on iteration %d.\n", counter + 1);
        
        // Update the variables or perform any other necessary actions
        
        // Increment the counter
        counter++;

        // Input values of x, y, and z again for the next iteration
        printf("Enter value of x: ");
        scanf("%d", &x);
        printf("Enter value of y: ");
        scanf("%d", &y);
        printf("Enter value of z: ");
        scanf("%d", &z);
    }

    printf("Condition not satisfied. Loop ended after %d iterations.\n", counter);

    return 0;
}
