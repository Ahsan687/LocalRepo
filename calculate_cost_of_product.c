/* programe_6 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
/* calculate cost of product*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qty, dic;       //decleration
    float P, total;

        printf("Enter the price p: ");      // assignment 
        scanf("%f", &P);

        printf("Enter discount: ");    // assignment
        scanf("%d", &dic);

        printf("Enter the quantity: ");     // assignment
        scanf("%d", &qty);

    if (qty > 1000) 
    {
        total = (P * qty) - (dic / 100.0) * (P * qty);
        printf("Total cost = Rs %.2f\n", total);               //.2%f will give the output upto two decimal places
    }
    else 
    {
        total = P * qty;
        printf("Total cost is = Rs %.2f\n", total);
    }
system("pause");
    return 0;
}