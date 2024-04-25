/* programe_24 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
//increment within body of loop

#include <stdio.h>

int main() 
{
    int i, st, end;
    float inc;
    
    printf("Enter the value to start counter: ");
    scanf("%d", &st);
    printf("Enter the value to stop the counter: ");
    scanf("%d", &end);
    printf("Enter the value of increment: ");
    scanf("%f", &inc);
    
    for (i = st; i <= end ; ) 
    {
        printf("%d\n", i);
        i += inc;         //here we give the increment 
    }
    
    return 0;
}
