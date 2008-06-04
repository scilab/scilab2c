#include<stdio.h>
#include<math.h>
#include "floatComplex.h"
#include "doubleComplex.h"

/*
// ===================
// === Prototypes. ===
// ===================
*/
double sdisps2 (float invar,char* invarname);
double ddisps2 (double invar,char* invarname);
double cdisps2 (floatComplex invar,char* invarname);
double zdisps2 (doubleComplex invar,char* invarname);
double g0dispd0 (char invar);

double sdispa2(float *array,int* tmparraysize,char* arrayname);
double ddispa2(double *array,int* tmparraysize,char* arrayname);
double cdispa2(floatComplex *array,int* tmparraysize,char* arrayname);
double zdispa2(doubleComplex *array,int* tmparraysize,char* arrayname);
double idispa2(int *array,int* tmparraysize,char* arrayname);
double g2dispd0(char *array,int* tmparraysize);

/*
//RN mi sembra che la disp di scilab ritorni ans mentre nei nomi delle prototype creati
//RN da scilab viene sempre fuori uno 0 come output arguments.
*/
