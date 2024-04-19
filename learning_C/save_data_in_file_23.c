/* programe_23 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
//simple intrest calculation using For_loop and save in file
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, p, t, n;
    float r, si;
    
    // Open the file in write mode
    FILE *fp = fopen("output.txt", "w");
    if (fp == NULL) 
    {
        printf("Error opening file.\n");
        return 1;
    }
    
    printf("how many accounts are there: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        printf("enter the value of principle amount: ");
        scanf("%d", &p);
        
        printf("enter the value of number of years: ");
        scanf("%d", &t);
        
        printf("enter the value of rate of interest: ");
        scanf("%f", &r);

        si = (p * t * r) / 100;
        printf("simple interest for person %d = %f\n", i, si);
        
        // Write the output to the file
        fprintf(fp, "Simple interest for person %d = %f\n", i, si);
    }

    // Close the file
    fclose(fp);

    return 0;
}
