/* programe_30 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// Do while loop 
#include <stdio.h>

int main() 
{
    int i, j;
    // Execute the loop at least once
    do 
    {
        printf("Num_1 is either greater or lesser than Num_2\n");
        // Prompt for input again
        printf("Enter the value of Num_1: ");
        scanf("%d", &i);
        printf("Enter the value of Num_2: ");
        scanf("%d", &j);
    } 
    while (i > j);   // Check condition after executing the loop body

    printf("Loop ended because Num_1 is not greater than Num_2\n");

    return 0;
}

