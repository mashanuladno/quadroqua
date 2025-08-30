#include <TXLib.h>

#include <assert.h>
#include <stdio.h>
#include <math.h>
#include <float.h> //DBL_EPSILON

const int SS_INF_ROOTS = -1;                                                                                             
const double DEVIAT = 1e-4;  //epsil

int solverEqu(const double a, const double b, const double c, double* x1, double* x2);
int solveLinearHandler(const double b, const double c, double* x1);
int solveLin(const double b, const double c, double* x);
int solveQuad(const double a, const double b, const double c, double* x1, double* x2);