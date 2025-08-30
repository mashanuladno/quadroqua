#include <TXLib.h>

#include <assert.h>
#include <stdio.h>
#include <math.h>
#include <float.h> //DBL_EPSILON

struct TestData
{
    double a, b, c;
    int nRootsRef;
    double x1Ref, x2Ref;
};

int checkWarn (TestData test);
int allTest ();
