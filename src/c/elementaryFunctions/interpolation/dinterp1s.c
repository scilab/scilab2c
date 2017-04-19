#include <stdio.h>
#include "interp1.h"
double  dinterp1s(double* x, int size, double* y,int size2, double xin, char* method,int size3)
{
   double x0=x[0];
   double x1=x[size-1];
   double y0=y[0];
   double y1=y[size2-1];
   double a = (y1 - y0) / (x1 - x0);
   double b = ((-a)*x0) + y0;
   double yout = 0.0;
   yout=(double) ((a*xin) + b);
   return yout;
}

/*
int main(void)
{
    double x0=3, y0=0, x1=5, y1=8;
    double x=4;
    double y = linear_interpolation(x0, y0, x1, y1, x);
    printf("(%f, %f), (%f, %f) for %f = %f\n", x0, y0, x1, y1, x, y);
    return 0;

}
*/
