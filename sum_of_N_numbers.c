/* programe_4 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
/*sum of N numbers*/

#include <stdio.h>
int main() 
{
    int n, i;
    float num, sum = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Read and sum 'n' numbers
    for (i = 1; i <= n; ++i) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }

    printf("Sum = %.2f\n", sum);

    return 0;
}
