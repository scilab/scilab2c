/*
**  -*- C -*-
**
** sinh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Fri Jan 19 15:19:49 2007 jofret
**
** Copyright INRIA 2006
*/

/*
** Compute Sine for different types .
*/

/*
** \brief Float Sine function
*/
float		ssinhs(float);

/*
** \brief Double Sine function
*/
double		dsinhs(double);

/*
** \brief Float Complex Sine function
*/
floatComplex	csinhs(floatComplex);

/*
** \brief Double Complex Sine function
*/
doubleComplex	zsinhs(doubleComplex);

/*
** \brief Float Matrix Sine function
*/
void		ssinha(float*, int, float*, int, int);

/*
** \brief Double Matrix Sine function
*/
void		dsinha(double*, int, double*, int, int);

/*
** \brief Float Complex Matrix Sine function
*/
void		csinha(floatComplex*, int, floatComplex*, int, int);

/*
** \brief Double Complex Matrix Sine function
*/
void		zsinha(doubleComplex*, int, doubleComplex*, int, int);


