/* programe_40 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
//Multiple Functions in single programme
#include <stdio.h>

// Function decleration
void A();
void B();
void C();
void D();

// Function definitions
void A() {
    printf("this is the function A\n");
}

void B() {
    printf("this is the function B\n");
}

void C() {
    printf("this is the function C\n");
}

void D() {
    printf("this is the function D\n");
}

int main() {
    A(); // Call function A
    D(); // Call function D
    printf("we can use any order to call a function\n");
    B(); // Call function B
    A(); // Call function A again
    C();
    printf("we can call a function 'n' number of times\n");
    return 0;
}
