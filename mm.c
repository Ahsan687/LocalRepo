/* assignment_1 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */

#include <stdio.h>

int main()
{
    int P, T;
    float R, Si;

    printf("Enter the value of P, T, and R: ");
    scanf("%d %d %f", &P, &T, &R);
    
    Si = (P * T * R) / 100.0;
    printf("Si = Rs %f", Si);
    return 0;
}
