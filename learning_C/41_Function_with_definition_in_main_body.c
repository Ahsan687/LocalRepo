/* programe_41 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// definition of fuction in main body
#include <stdio.h>
void message(); // Function declaration
// we can give definiton of the function after its decleration here 
int main() 
{ 
    // Function definition
    void message()   
{
    printf("this is the body of message function\n");
}
    //we can also give definition of funtion in main function body anywhere 
    message(); // Function call
    printf("Function is working fine !\n");
    message(); // Function call
    return 0;
}


