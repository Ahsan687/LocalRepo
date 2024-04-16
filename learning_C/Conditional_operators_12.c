/* programe_12 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// use of conditional operators (" ? and :")
// if a > 65 then y = 1 else 0

#include <stdio.h>
int main()
{
    int a , y ;
    printf("Enter the value of a: ");
    scanf("%d", & a);
        y = ((a >= 65)&&(a <= 90)? 1:0);
        printf("value of y = %d",y);
return 0;
}