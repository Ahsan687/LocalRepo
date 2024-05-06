/* programe_38 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// use of goto statement
#include <stdio.h>
int main()
{
    int gen;
    printf("enter the value of gen:");
    scanf("%d",&gen);
    if (gen < 5)
    goto pq;
    else
    {
        printf("good day");
    
    exit(1);
    }
    pq : 
    {
        printf("bad day");
    }
return 0;
}
