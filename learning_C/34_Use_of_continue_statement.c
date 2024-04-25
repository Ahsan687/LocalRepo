/* programe_34 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// use of continue statement  
#include <stdio.h>
int main()
{
    int i, j;
    for(i=1;j<=3;j=j+1)
    {
        if (i==j)
        continue;
        else
        printf("%d,%d",i,j);
    }
return 0;
}