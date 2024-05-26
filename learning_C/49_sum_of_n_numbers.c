/* programe_49 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// sum of n numbers iucaa homework
#include <stdio.h>
int main() {
    float i, j, sum = 0;
    
    printf("Enter the starting number: ");
    scanf("%f", &i);
    
    printf("Enter the last number: ");
    scanf("%f", &j);
    
    // Ensure i is the first number and j is the last number
    if (i > j) {
        float temp = i;
        i = j;
        j = temp;
    }
    
    // Iterate from i to j and accumulate the sum
    for (float num = i; num <= j; num++) {
        sum += num;
    }
    
    printf("Sum of the numbers from %.2f to %.2f = %.2f\n", i, j, sum);
    
    return 0;
}
