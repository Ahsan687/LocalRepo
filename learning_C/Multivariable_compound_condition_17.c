/* programe_17 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// multivariable compounded condition
#include <stdio.h>

int main() {
    int  i,j, k, t, x, y, z;
    printf("Enter value of j: ");
    scanf("%d", &j);
    printf("Enter value of k: ");
    scanf("%d", &k);
    printf("Enter value of t: ");
    scanf("%d", &t);
    printf("Enter value of x: ");
    scanf("%d", &x);
    printf("Enter value of y: ");
    scanf("%d", &y);
    printf("Enter value of z: ");
    scanf("%d", &z);
    i = (j >= x) || (k <= y) && (t < z); // Initializing i correctly

    while (i)   // Correcting the while loop condition
    {
        printf("value of i = %d\n", i);
        j = j - 1;
        k = k + 1;
        t = t + 1;
        i = (j >= x) || (k <= y) && (t < z); // Update i for the next iteration
    }
    return 0;
}
