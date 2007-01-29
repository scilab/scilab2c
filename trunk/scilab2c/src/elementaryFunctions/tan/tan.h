/*
**  -*- C -*-
**
** tan.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Jan 29 16:10:30 2007 jofret
**
** Copyright INRIA 2006
*/

/*
** Compute Tangeant for different types .
*/

/*
** \brief Float Tangeant function
*/
float		stans(float);

/*
** \brief Double Tangeant function
*/
double		dtans(double);

/*
** \brief Float Complex Tangeant function
*/
floatComplex	ctans(floatComplex);

/*
** \brief Double Complex Tangeant function
*/
doubleComplex	ztans(doubleComplex);

/*
** \brief Float Matrix Tangeant function
*/
void		stana(float*, int, float*, int, int);

/*
** \brief Double Matrix Tangeant function
*/
void		dtana(double*, int, double*, int, int);

/*
** \brief Float Complex Matrix Tangeant function
*/
void		ctana(floatComplex*, int, floatComplex*, int, int);

/*
** \brief Double Complex Matrix Tangeant function
*/
void		ztana(doubleComplex*, int, doubleComplex*, int, int);


