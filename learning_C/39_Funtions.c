/* programe_39 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// Functions in C
#include <stdio.h>
void message(); // Function declaration
// we can give definiton of the function after its decleration here 
int main() 
{ 
    //we can also give definition of funtion in main function body anywhere 
    message(); // Function call
    printf("Function is working fine !\n");
    message(); // Function call
    return 0;
}

// Function definition
void message()   
{
    printf("this is the body of message function\n");
}
