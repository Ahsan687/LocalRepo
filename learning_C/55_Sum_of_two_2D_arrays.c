#include <stdio.h>

int main() 
{
    int n, m;  // n and m are the dimensions of the array
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (m): ");
    scanf("%d", &m);

    // Now we define the two 2D matrices
    float arry_1[n][m], arry_2[n][m], Sum_arry[n][m];

    // Define a counter by which we can put the values of elements into arry_1 and arry_2
    int i, j;

    // Input values for the first array
    printf("Enter the values for the first array:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter the value of element arry_1[%d][%d]: ", i, j);
            scanf("%f", &arry_1[i][j]);
        }
    }

    // Input values for the second array
    printf("Enter the values for the second array:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++)
        {
            printf("Enter the value of element arry_2[%d][%d]: ", i, j);
            scanf("%f", &arry_2[i][j]);
        }
    }

    // Perform the sum
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            Sum_arry[i][j] = arry_1[i][j] + arry_2[i][j];
        }
    }

    // Print the sum array
    printf("Sum of the arrays:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%f ", Sum_arry[i][j]);
        }
        printf("\n");
    }

    return 0; 
}
