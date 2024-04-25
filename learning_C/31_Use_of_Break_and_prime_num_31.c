/* programe_31 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// use of break statement  
#include <stdio.h>
int main()
{
    int num, i ;
    printf("Enter the nummber :");
    scanf("%d",&num);
    i =2;
    while (i <= num - 1)
    {
        if (num % i == 0)
        {
            printf("not a prime number");
            break;
        }
        i =i+1;
    }
    if (i== num)
    {
        printf("prime number");
    }
return 0;
}