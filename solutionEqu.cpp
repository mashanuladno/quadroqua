#include "solutionEqu.h" 

// solving the equation
int solverEqu(const double a, const double b, const double c, double* x1, double* x2)
{
    assert(x1 != NULL);
    assert(x2 != NULL);

    if (fabs(a) < DEVIAT)
    {
        return solveLinearHandler(b, c, x1);
    }
    else
    {
        return solveQuad(a, b, c, x1, x2);
    }
}

// checking linear equation or infin
int solveLinearHandler(const double b, const double c, double* x1)
{
    assert(x1 != NULL);

    if (fabs(b) < DEVIAT)
    {
        return (fabs(c) < DEVIAT) ? SS_INF_ROOTS : 0;  // infinite number of roots
    }                         
    else
    {
        return solveLin(b, c, x1);                                             // linear equation
    } 
}

// solution is a linear equation

int solveLin(const double b, const double c, double* x)
{
    assert(x != NULL);
    
    *x = -c / b;
    return 1;
}

int solveQuad(const double a, const double b, const double c, double* x1, double* x2)
{
    assert(x1 != NULL);
    assert(x2 != NULL);
    
    const double discrim = b * b - 4 * a * c;

    if (discrim < 0.0)
    {
        return 0;
    }
    else if (fabs(discrim) < DEVIAT)
    {
        *x1 = *x2 = -b / (2 * a);
        return 1;
    }
    else
    {
        double sqrt_d = sqrt(discrim);
        *x1 = (-b + sqrt_d) / (2 * a);
        *x2 = (-b - sqrt_d) / (2 * a);
        return 2;
    }
}