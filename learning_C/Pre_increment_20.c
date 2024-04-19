/* programe_20 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// post increment operator i++
#include <stdio.h>
int main()
{
    int i,j;
    printf("Enter the value to start the counter :");
    scanf("%d",&i);
    printf("Enter the valuer where to stop the counter j:");
    scanf("%d",&j);

    while (++i <= j)     // this will ist increse the value of i then test it 
        printf("%d\n",i);

    return 0;
}