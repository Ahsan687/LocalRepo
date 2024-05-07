/* programe_42 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// communication between main and user defined function
#include<stdio.h>

int add(int x, int y); //decleration of function

int add(int x, int y)
{                       //definition of function
    int z;
    z = x + y;
    return (z);
}

int main() 
{
    int x, y, z;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    z = add(x, y);       // calling the function add
    printf("Sum = %d", z);
    return 0;
}
