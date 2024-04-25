/* programe_35 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// odd loop 
#include <stdio.h>

int main() 
{
    char a;
    int num, squar;
    
    do 
    {
        printf("Enter the number: ");
        scanf("%d", &num); // corrected format string

        squar = num * num;
        printf("Square of the number = %d\n", squar); // added newline for clarity

        printf("Do you want to repeat (Y/N): ");
        scanf(" %c", &a);
    } 
    while (a == 'Y' || a == 'y'); // adjusted condition to handle both 'Y' and 'y'
    fflush(stdin);
    return 0;
}
