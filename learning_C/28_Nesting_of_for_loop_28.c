/* programe_28 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// Nesting of for loop and saving file to output.text
#include <stdio.h>
int main() 
{
    int start, end, increment;

    // Input from user
    printf("Enter the starting value: ");
    scanf("%d", &start);
    printf("Enter the ending value: ");
    scanf("%d", &end);
    printf("Enter the increment value: ");
    scanf("%d", &increment);

    // Open file for writing
    FILE *outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Loop for rows
    for (int row = start; row < end; row += increment)
    {
        // Loop for columns
        for (int col = start; col <= end; col += increment)
        {
            // Calculate sum
            int sum = row + col;
            // Print values and sum to console
            printf("%d, %d, sum=%d\n", row, col, sum);
            // Write values and sum to file
            fprintf(outputFile, "%d, %d, sum=%d\n", row, col, sum);
        }
    }

    // Close file
    fclose(outputFile);
    printf("Output saved to output.txt\n");

    return 0;
}
