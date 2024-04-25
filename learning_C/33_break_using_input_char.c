/* programe_33 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// break loop from input   
#include <stdio.h>
int main()
{
    int i, j;
    char k;
    i=0;
    j=0;
    FILE *fp = fopen("break_loop.txt", "w");
    if (fp == NULL)
     {
        printf("Error opening file.\n");
        return 1;
    }
    
    while (i++<= 100)
    {
        while (j++<=200)
        {
            printf("do you want to continue (Y/N)");
            scanf("%c", &k);
                if (k=='Y')
                printf("%d,%d",i,j);
                else
                break;
        }
        return 0;
    }
}