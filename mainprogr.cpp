//Solving the quadratic equation

#include <TXLib.h>

#include <assert.h>
#include <stdio.h>
#include <math.h>
#include <float.h> //DBL_EPSILON

#include "inputoutput.h"
#include "solutionEqu.h"
#include "test.h"

int main(void)
{
    printMenu();

    int choice = 0;
    scanf("%d", &choice);

    if (choice == 0)
    {
        allTest();
    }
    else if (choice == 1)
    {
        double a = 0.0, b = 0.0, c = 0.0;
        double x1 = 0.0, x2 = 0.0;
        int countX = 0;

        while (printTitle(&a, &b, &c) != 0);

        countX = solverEqu(a, b, c, &x1, &x2);
        printResults(countX, x1, x2);
    }
    else
    {
        printf("invalid input. enter 0 or 1\n");
    }      
    return 0;

}
