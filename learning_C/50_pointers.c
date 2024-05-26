/* programe_50 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// use of pointers 
#include <stdio.h>  // Include standard input-output library
int main()
{
    float i;   // Declare a float variable 'i'
    float *j;  // Declare a pointer to a float 'j'

    // Prompt the user to enter a float number
    printf("Enter the number you want to store in i: ");
    
    // Read the input float number and store it in 'i'
    scanf("%f", &i);

    // Assign the address of 'i' to the pointer 'j'
    j = &i;

    // Print the address of 'i' using &i
    printf("1) address of i = %u\n", &i); 
    
    // Print the address of 'i' stored in 'j'
    printf("2) address of i = %u\n", j);
    
    // Print the address of the pointer 'j' using &j
    printf("3) address of j = %u\n", &j);
    
    // Print the value of the pointer 'j', which is the address of 'i'
    printf("4) value of j = %u\n", j);
    
    // Print the value of 'i' directly
    printf("6) value of i = %f\n", i);
    
    // Print the value of 'i' using the de-referenced address of 'i'
    printf("7) value of i = %f\n", *(&i));
    
    // Print the value of 'i' using the pointer 'j'
    printf("8) value of i = %f\n", *j);

    return 0;  // Return 0 to indicate successful execution
}