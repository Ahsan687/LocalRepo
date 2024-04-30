/* programe_37 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// multiple cases in a single statement

#include <stdio.h>
int main() {
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    switch (ch) {
        case 'a':
        case 'A':
            printf("Print a\n");
            break;
        case 'b':
        case 'B':
            printf("Print b\n");
            break;
        case 'c':
        case 'C':
            printf("Print c\n");
            break;
        default:
            printf("No case matched, so printed default\n");
    }
    
    return 0;
}
