/* programe_15 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// use of while loop
// Use a while loop to print values from i to t with decriment j

#include <stdio.h>

int main() 
{
    int i, t, j; // Declare variables i, t, and j
    printf("Enter the value to start the counter from: ");
    scanf("%d", &i); // Use %d to read an integer
    printf("Enter the value to stop the counter at: ");
    scanf("%d", &t); // Use %d to read an integer
    printf("Enter the value of Decrement: ");
    scanf("%d", &j); // Use %d to read an integer

    while (t <= i) 
    {
        printf("Value of i= %d\n", i); // Use %d to print an integer
        i = i - j;
    }

    return 0;
}

