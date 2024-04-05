/* programe_9 */ 
/* author Ahsan ul haq */
/* roll number 22069120033 */
/* nested if  */
// problem  given is 
// total marks = 400
// subjects = physics, chemistry, math , english
// if % of marks >= 60 then give Ist division 
// if % of marks 59-50 then give 2nd division 
// if % of marks 49-40 then give 3rd division 
// if % of marks < 40 then fail

#include <stdio.h>
int main()
 
{
    float P, C, M, E, per;
    printf("Enter marks of Physics: ");
    scanf("%f", &P);
    printf("Enter marks of Chemistry: ");
    scanf("%f", &C);
    printf("Enter marks of Math: ");
    scanf("%f", &M);
    printf("Enter marks of English: ");
    scanf("%f", &E);
    per = ((P + C + M + E) / 400) * 100;

        if (per >= 60) 
    {
        printf("Ist division");
    }
    if (per > 50 && per < 60) 
    {
        printf("2nd division");
    }
    if (per >= 40 && per < 50) 
    {
        printf("3rd division");
    }
    if (per < 40) 
    {
        printf("Fail");
    }
    
    return 0;
}
