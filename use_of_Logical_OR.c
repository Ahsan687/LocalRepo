
/* programe_10 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
/*use of logical OR ( || )*/
// programe in which a company has to give insureance to a driver // 
// conditions are as insureance will be given if 
// a, Driver is married 
// b , driver is unmarred male annd above 30 years 
// c, driver is unmarred female and above 25 years

# include <stdio.h>
int main ()
{
    int age ;
    char gen , ms ;
    printf("Enter the age of driver:");
    scanf("%d",& age);
    printf("Enter the gender of the driver:");
    //to read characters, it leaves the newline character ('\n') in the input buffer from the previous scanf(). 
    //This causes the second scanf() to read the newline character instead of waiting for user input.
    //to fix this, you need to consume the newline character after reading integers. 
    // You can do this by adding a space before the %c specifier in your scanf() calls.
    scanf(" %c", &gen);                 
    printf("Enter the marital status of driver:");
    scanf(" %c", &ms);

        if ((ms == 'Y') || ((ms == 'N') && ((gen == 'M') && (age >= 30))) || (((ms == 'N') && ((gen == 'F') && (age >= 25)))))
        printf("Insurance should be provided.\n");
    else
        printf("Insurance will not be provided.\n");

    return 0;
}