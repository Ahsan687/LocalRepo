/* programe_7 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
/* Nested if loop */


#include <stdio.h>
#include <math.h>

int main()
{
float a, b, c, d ,X1 , X2 ;

    printf("Enter the value of a");
    scanf("%f", &a);
    printf("Enter the value of b");
    scanf("%f", &b);
    printf("Enter the value of c");
    scanf("%f", &c);
        d = (b*b) - (4 * a * c);
   
    if (d<0)
    printf("Real roots does not exsist");

    else
        {
        if (d == 0)
        {
        printf("only one root exsist");
            X1 = -b / (2*a);
        printf("Root=%f", X1);
        }  
        else
        {
            printf("two roots exsist");
                X1 = (-b + pow(d,0.5))/(2*a) ;
                X2 = (-b - pow(d,0.5))/(2*a) ; 
        printf("X1 = %f", X1);
        printf("X2 = %f", X2);
        }
        }
    return 0;
}