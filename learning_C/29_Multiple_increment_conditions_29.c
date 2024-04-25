/* programe_29 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// multiple increment conditions in for loop
#include <stdio.h>

int main() 
{
    int i, j;
    for(i=1, j = 2; i<=3 && j<= 5; i=i+1, j=j+1)
    {
        printf("sum of i+j = %d\n", i+j);
    }
    printf("calculation completed\n");
    return 0;
}
