/* programe_52 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// use of arrys
#include <stdio.h>

int main()
{
    int avg, sum, i, x;

    printf("Enter the number of days: ");
    scanf("%d", &x);

    int t[x];
    sum = 0;

    for (i = 0; i < x; i++)
    {
        printf("Enter the temp for day %d: ", i);
        scanf("%d", &t[i]);
    }

    for (i = 0; i < x; i++)
    {
        sum += t[i];
    }

    avg = sum / x;
    printf("Average temp = %d\n", avg);

    return 0;
}
