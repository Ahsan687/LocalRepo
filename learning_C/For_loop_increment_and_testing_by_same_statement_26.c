/* programe_26 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
//increment and testing by same statement

#include <stdio.h>
int main() 
{
    int i,st, end;
    printf("Enter the value to start counter: ");
    scanf("%d", &st);
    printf("Enter the value to stop the counter: ");
    scanf("%d", &end);
    i = st;
    for ( ; i++ < end ; )       // we can also use ++i
        printf("%d\n", i);
    return 0;
}
