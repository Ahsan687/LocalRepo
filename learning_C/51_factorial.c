/* programe_51 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// use of recurrsion or the factorial 
#include <stdio.h>

// Function declaration
int rec(int x);
    int rec(int x) 
{
    int f;
    if (x == 1)
        return 1;
    else
        f = x * rec(x - 1);
    return f;
}

int main() 
{

    int a, fact;
    printf("enter the number: ");
    scanf("%d", &a);
    fact = rec(a);
    printf("factorial of %d = %d \n", a, fact); 
    return 0;
}
