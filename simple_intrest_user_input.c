/* programe_2 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */

#include <stdio.h>

 
int main()
{
    int P, T;
    float R, Si;

    printf("Enter the value of P");
    scanf("%d", &P);
    printf("Enter the value of T");
    scanf("%d", &T);
    printf("Enter the value of R");
    scanf("%f", &R);

    Si = (P * T * R) / 100.0;

    printf("Si = Rs %f", Si);
    return 0;
}
