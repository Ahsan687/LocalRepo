/* programe_11 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// use of conditional operators (" ? and :")

#include <stdio.h>
int main()
{
    int x, y ;
    printf("Enter the value of X :");
    scanf("%d", &x);
    (y = (x > 5 ? 3 : 4));
    
    //if condition is true statement I (3) execuited otherwise statement II (4)

    printf("value of y = %d", y);

return 0;
}