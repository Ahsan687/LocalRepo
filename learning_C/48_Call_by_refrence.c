/* programe_48 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// call by refrence

#include <stdio.h>
int main ()
{
    int i = 3;

// this is used to print the adress of the variable i

    printf("address of i = %u \n",&i); // & is called adress oprator

// we can also use the below statement to call value of i

    printf("value of the variable i = %d \n", i);

// we can also call the value of i by using refernce ie adress 

    printf("value of i= %d\n",*(&i)); // * is called value operator
return 0;
}