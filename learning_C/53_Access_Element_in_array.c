/* programe_53 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
// Acesss an element in arrys
//eg marks of a particular student

#include <stdio.h>
int main()
{
    int x,i;
    printf("Enter the number of students: ");
    scanf("%d", &x);

    int marks[x];
    for (i = 1 ; i<=x ; i++)
    {
// entering marks for each student one by one

        printf("enter marks of student %d",i);
        scanf("%d",&marks[x]);

// entering marks by directly defining the marks[x]array
//   marks[x]= {45,25,36,56,...so on};
    }
//now accessing marks of particular student 

    int y;
    printf("Enter the roll number for which you want to check the marks: ");
    scanf("%d", &y);
    printf("marks of roll no. %d are = %d\n",y,marks[y]);
return 0;
}