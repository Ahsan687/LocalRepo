/* programe_32 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// use of break statement  
#include <stdio.h>
int main()
{
    int i, j;
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
            if(j==150)
            break;
            else
                printf("%d,%d \n",i,j);
        fprintf(fp, "combination is  %d ,%d \n", i,j);
        }

    }
// Close the file
    fclose(fp);
return 0;
}
//When i becomes 2, the inner loop does not start from j=151.
//It actually starts from j=1 again, because j is not reset to its initial value after the outer loop iterates. 
//Therefore, j will continue from wherever it left off in the previous iteration of the outer loop,
// which in this case would be j=201