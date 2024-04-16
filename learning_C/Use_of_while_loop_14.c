/* programe_14 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// use of while loop
// Use a while loop to print values from i to t with increment j

#include <stdio.h>

int main() {
    float i, t, j; // Declare variables i, t, and j
    printf("Enter the value to start the counter from: ");
    scanf("%f", &i);
    printf("Enter the value to stop the counter at: ");
    scanf("%f", &t);
    printf("Enter the value of increment: ");
    scanf("%f", &j); // Corrected to read into j

    
    while (i <= t) 
    {
        printf("Value of i= %.2f\n", i);  // Corrected to print float values upto 2 decimal places
        // printf("We can make the program print any number of blocks\n");
        i = i + j;
    }

    return 0;
}
