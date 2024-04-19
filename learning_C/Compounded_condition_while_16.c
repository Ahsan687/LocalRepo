/* programe_16 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// Use of compounded condition in a while loop 

#include <stdio.h>
int main() 
{
    int i,j,k,t;
    printf("Enter starting point :");
    scanf("%d",&i);
    printf("Enter midpoint point :");
    scanf("%d",&j);
    printf("Enter end point :");
    scanf("%d",&k);
    printf("Enter increment :");
    scanf("%d",&t);

    while((i>=j)&&(i<=k))
    {
    printf("%d \n",i);
    printf("we are good\n");
    i=i+t;
    }
return 0;
}