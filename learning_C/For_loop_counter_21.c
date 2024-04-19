/* programe_21 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// For_loop counter 
#include <stdio.h>
int main()
{
    int i,j,k,t;
    printf("Enter the number to start the counter:");
    scanf("%d",&j);
    printf("Enter the number to stop the counter:");
    scanf("%d",&k);
    printf("Enter the number for incriment:");
    scanf("%d",&t);
        for(i= j ; i <= k ; i=i+t)
        {
            printf("%d\n",i);
        }
return 0;
} 