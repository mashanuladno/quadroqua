#include "solutionEqu.h"
#include "test.h"


// main function of the tests
int checkWarn (TestData test)
{
    double x1 = 0, x2 = 0;
    int nRoots = solverEqu(test.a, test.b, test.c,&x1,&x2);

    if (nRoots != test.nRootsRef || !(fabs(x1-test.x1Ref)<DEVIAT) || !(fabs(x2 - test.x2Ref) < DEVIAT))
    {
        printf("FAILED: for a=%.2f, b=%.2f, c=%.2f\n, result was expected: nRoots = %d, x1 = %g, x2 = %g,\n\
        received result: nRoots = %d, x1 = %g, x2 = %g\n", test.a, test.b, test.c, test.nRootsRef, test.x1Ref, test.x2Ref, nRoots, x1, x2);
        return 0;
    }
    else
    {
        return 1;
    }

}

 // array of tests

int allTest()
{
    TestData tests[6]={{.a = 1, .b = -3, .c = 2, .nRootsRef = 2 , .x1Ref = 2, .x2Ref = 1},
    {.a = 1, .b = 2, .c = 1, .nRootsRef = 1, .x1Ref = -1, .x2Ref = -1},
    {.a = 1, .b = 0, .c = -1, .nRootsRef = 2, .x1Ref = 1, .x2Ref = -1},
    {.a = 1, .b = 0, .c = 1, .nRootsRef = 0, .x1Ref = 0, .x2Ref = 0},
    {.a = 0, .b = 0, .c = 0, .nRootsRef = SS_INF_ROOTS, .x1Ref = 0, .x2Ref = 0},
    {.a = 0, .b = 0, .c = 1, .nRootsRef = 0, .x1Ref = 0, .x2Ref = 0}};

    int size = sizeof(tests) / sizeof(tests[0]);
    int fail = 0, i = 0;

    for (i=0; i < size; i ++)
    {
        fail += !checkWarn (tests[i]);
    }
    if (fail == 0)
    {
        printf("COOL!");
    }
    return fail;
}