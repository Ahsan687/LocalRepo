/* programe_36 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// use of  case control statement
# include<stdio.h>
int main()
{
    int i;
    printf("enter the value of i: ");
    scanf("%d",&i);
    switch (i)
    {
    case 1:
        printf("bad\n");
        break;
    case 2:
        printf("good\n");
        break;
    case 3:
        printf("very bad\n");
        break;
    default:
        printf(" default\n");
        break;
    }
}