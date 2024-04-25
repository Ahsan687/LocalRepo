/* programe_22 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
//simple intrest calculation using For_loop 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,p,t,n;
    float r,si;
    printf("how many accouts are there :");
    scanf("%d",&n);
        for(i= 1; i <= n ; i=i+1)
        {
            printf("enter the value of principle amoutn :");
            scanf("%d",&p);
            printf("enter the value of number of years :");
            scanf("%d",&t);
            printf("enter the value of rate of intrest :");
            scanf("%f",&r);
//printf("Enter the values of principle amount, number of years, and rate of interest: ");
//scanf("%d %d %f", &p, &t, &r);

            si = (p*t*r)/100 ;
            printf("simple intrest for %d person = %f",i,si);
            system("pause");
        }
system("pause");
return 0;
}