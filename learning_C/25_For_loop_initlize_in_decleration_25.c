/* programe_25 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
//increment and initilize in body and in decleration statement resptivelly

#include <stdio.h>
int main() 
{
    int i,st, end;
    float inc;
    printf("Enter the value to start counter: ");
    scanf("%d", &st);
    printf("Enter the value to stop the counter: ");
    scanf("%d", &end);
    printf("Enter the value of increment: ");
    scanf("%f", &inc);
    i = st;
    for ( ; i <= end ; ) 
    {
        printf("%d\n", i);
        i =i + inc;         //here we give the increment 
    }
    
    return 0;
}
