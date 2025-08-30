#include "inputoutput.h"
#include "solutionEqu.h"

int printTitle(double* a, double* b, double* c)
{
    assert(a != NULL);
    assert(b != NULL);
    assert(c != NULL);
    
    printf("enter coefficients a, b, c: \n");
    int res = scanf("%lf %lf %lf", a, b, c);
    if (res != 3)
    {
        printf("input error. enter 3 numbers\n");
        while (getchar()!='\n');                                                    
        return -1;
    }
    return 0;
}




void printResults(int countX, const double x1, const double x2)
{
    switch (countX)
    {
        case 0:
            printf("the equation has no real roots.\n");
            break;
        case 1:
            printf("the equation has 1 real root: %g\n", x1);
            break;
        case 2:
            printf("the equation has 2 real roots: %g, %g\n", x1, x2);
            break;
        case SS_INF_ROOTS:
            printf("the quation has an infinite number of roots.\n");
            break;
    }
}





void printMenu(void)
{
    printf("select an action and send the corresponding number\n");
    printf("1 - calculate the roots of a quadratic equation\n");
    printf("0 - conduct tests\n");
}

