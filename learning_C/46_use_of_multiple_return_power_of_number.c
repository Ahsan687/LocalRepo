/* programe_46 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// use of multiple return statements
#include <stdio.h>
int power(int n);
power(int n) 
{
    if (n >= 2) {
        return (n * n);
    } else {
        return (n);
    }
}

int main() {
    int n, m;
    printf("Enter value of n: ");
    scanf("%d", &n);
    m = power(n);
    printf("Power of %d = %d\n", n, m);
    return 0;
}
