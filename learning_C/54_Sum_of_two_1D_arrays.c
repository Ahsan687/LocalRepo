/* programe_54 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
//Adding two 1D arrays

#include <stdio.h>

int main() 
{
    int n;  // n is the dimension of the array
    printf("What is the dimension of your 1D array: ");
    scanf("%d", &n);

    // Now we define the two 1D matrices
    int mat_1[n], mat_2[n], mat_3[n];

    // Define a counter by which we can put the values of elements into mat_1 and mat_2
    int i;
    for (i = 0; i < n; i++) 
    {
        printf("Enter the value of element mat_1[%d]: ", i);
        scanf("%d", &mat_1[i]);
    }

    // Similarly for mat_2 elements
    for (i = 0; i < n; i++) 
    {
        printf("Enter the value of element mat_2[%d]: ", i);
        scanf("%d", &mat_2[i]);
    }

    // formating the mat_3[n] to avoid any junk in output

    for (int k = 0; k < n ; k++)
    mat_3[k]=0;
    
    // Now doing the addition of mat_1 and mat_2
    for (i = 0; i < n; i++) 
    {
        mat_3[i] = mat_1[i] + mat_2[i];
    }

    // Print the values of mat_3

    printf("Values of the summed matrix mat_3:\n");
    for (i = 0; i < n; i++) {
        printf("mat_3[%d] = %d", i, mat_3[i]);
    }

    return 0;
}
