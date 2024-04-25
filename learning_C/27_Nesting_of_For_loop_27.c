/* programe_27 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// Nesting of for loop

#include <stdio.h>
int main() 
{
    int i,r, c,j, sum,end;
    printf("Enter the value to start counter: ");
    scanf("%d", &i);
    printf("Enter the value to stop the counter: ");
    scanf("%d", &end);
    printf("Enter the value of increment: ");
    scanf("%d", &j);
    for ( r = i; r < end ; r = r+j)
    {
        for(c = i ;c <= end ; c=c+j)
        {
            sum = r+c;
            printf("%d,%d,sum=%d\n",r,c,sum);
        }
    }
    return 0;
}
