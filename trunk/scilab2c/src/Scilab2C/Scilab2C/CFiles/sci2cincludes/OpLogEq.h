/*
**  -*- C -*-
**
** 
** Made by  Raffaele.Nutricato@tiscali.it
**
** Copyright Raffaele Nutricato
*/
/* Modified by Arnaud Torset */


#ifndef __OPLOGEQ_H__
#define __OPLOGEQ_H__

#include "floatComplex.h"
#include "doubleComplex.h"

#define s0s0OpLogEqs0(in1,in2)	 (float)  (in1 == in2)
#define d0d0OpLogEqd0(in1,in2)	 (double)  (in1 == in2)
#define c0c0OpLogEqs0(in1,in2) 	 (float)  ((creals(in1) == creals(in2)) && (cimags(in1) == cimags(in2)))
#define z0z0OpLogEqd0(in1,in2) 	 (double)  ((zreals(in1) == zreals(in2)) && (zimags(in1) == zimags(in2)))

#define s0c0OpLogEqs0(in1,in2)	(float) ((in1==creals(in2)) && (0==cimags(in2)))
#define d0z0OpLogEqd0(in1,in2)	(double) ((in1==zreals(in2)) && (0==zimags(in2)))
#define c0s0OpLogEqs0(in1,in2)	s0c0OpLogEqs0(in2,in1)
#define z0d0OpLogEqd0(in1,in2)	d0z0OpLogEqd0(in2,in1)


void s2s0OpLogEqs2(float* in1,int *size1,float in2,float *out);		
void c2s0OpLogEqs2(floatComplex* in1,int *size1,float in2,float* out);	
	
void d2d0OpLogEqd2(double* in1,int *size1,double in2,double* out)	;	
void z2d0OpLogEqd2(doubleComplex* in1,int *size1,double in2,double* out);
		
void s2c0OpLogEqs2(float* in1,int *size1,floatComplex in2,float* out);		
void c2c0OpLogEqs2(floatComplex* in1,int *size1,floatComplex in2,float* out);	
	
void d2z0OpLogEqd2(double* in1,int *size1,doubleComplex in2,double* out);		
void z2z0OpLogEqd2(doubleComplex* in1,int *size1,doubleComplex in2,double* out);		


#define  s0s2OpLogEqs2(in1,in2,in2Size,out) 	s2s0OpLogEqs2(in2,in2Size,in1,out)
#define  c0s2OpLogEqs2(in1,in2,in2Size,out)  	s2c0OpLogEqs2(in2,in2Size,in1,out)
#define  d0d2OpLogEqd2(in1,in2,in2Size,out)  	d2d0OpLogEqd2(in2,in2Size,in1,out)
#define  z0d2OpLogEqd2(in1,in2,in2Size,out)  	d2z0OpLogEqd2(in2,in2Size,in1,out)
#define  s0c2OpLogEqs2(in1,in2,in2Size,out)  	c2s0OpLogEqs2(in2,in2Size,in1,out)
#define  c0c2OpLogEqs2(in1,in2,in2Size,out)  	c2c0OpLogEqs2(in2,in2Size,in1,out)
#define  d0z2OpLogEqd2(in1,in2,in2Size,out)  	z2d0OpLogEqd2(in2,in2Size,in1,out)
#define  z0z2OpLogEqd2(in1,in2,in2Size,out) 	z2z0OpLogEqd2(in2,in2Size,in1,out)
/*
void s2s2OpLogEqs2(float* in1, int* in1Size, float* in2, int* in2Size, float* out);
void d2d2OpLogEqd2(double* in1, int* in1Size, double* in2, int* in2Size, double* out);
void c2c2OpLogEqs2(floatComplex* in1, int* in1Size, floatComplex* in2, int* in2Size, float* out);
void z2z2OpLogEqd2(doubleComplex* in1, int* in1Size, doubleComplex* in2, int* in2Size, double* out);

void s2c2OpLogEqs2(float* in1, int* in1Size, floatComplex* in2, int* in2Size, float* out);
void d2z2OpLogEqd2(double* in1, int* in1Size, doubleComplex* in2, int* in2Size, double* out);
#define  c2s2OpLogEqs2(in1,in1Size,in2,in2Size,out)		s2c2OpLogEqs2(in2,in2Size,in1,in1Size,out)	
#define  z2d2OpLogEqd2(in1,in1Size,in2,in2Size,out)		d2z2OpLogEqd2(in2,in2Size,in1,in1Size,out)*/
#endif /* !__OPLOGGT_H__ */
