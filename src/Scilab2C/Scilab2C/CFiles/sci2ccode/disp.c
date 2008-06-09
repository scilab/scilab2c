#include "disp.h"

                            /* =================================
                             =================================
                             === SCILAB 2 C Debug Library. ===
                             =================================
                             =================================
                             */
/*~ double ddisps1 (double invar)
{
   char* invarname = "ans";
   printf("\n%s: %f\n",invarname,invar);
   return 0;
}
*/


double sdisps2 (float invar,char* invarname)
{
   printf("\n%s: %g\n",invarname,invar);
   return 0;
}

double ddisps2 (double invar,char* invarname)
{
   printf("\n%s: %g\n",invarname,invar);
   return 0;
}

double cdisps2 (floatComplex invar,char* invarname)
{
   printf("\n%s: (%g,%g)\n",invarname,creals(invar),cimags(invar));
   return 0;
}

double zdisps2 (doubleComplex invar,char* invarname)
{
   printf("\n%s: (%g,%g)\n",invarname,zreals(invar),zimags(invar));
   return 0;
}

double g0dispd0(char array)
{
   /*int counterrows;*/
   /*int countercols;*/
   /*
	//~ printf("\n");
	//~ printf("\n%s:\n",arrayname);
   */
   printf("\n");
   printf("%c",array);
   printf("\n");
   return 0;
}
/*
double ddispa1(double *array,int* tmparraysize)
{
   char* arrayname = "ans";
   int counterrows ;
   int countercols ;
   
	printf("\n========================================================");
	printf("\n%s:\n",arrayname);
	for(counterrows = 0; counterrows < tmparraysize[0]; counterrows++)
	{
      for(countercols = 0; countercols < tmparraysize[1]; countercols++)
      {
			printf("\t[%d,%d]:%f",counterrows,countercols,array[counterrows*tmparraysize[0]+countercols]);
      }
      printf("\n");
   }
	printf("\n========================================================\n");
   return 0;
}
*/

double sdispa2(float *array,int* tmparraysize,char* arrayname)
{
   int counterrows ;
   int countercols ;
   
	printf("\n========================================================");
	printf("\n%s:\n",arrayname);
	for(counterrows = 0; counterrows < tmparraysize[0]; counterrows++)
	{
      for(countercols = 0; countercols < tmparraysize[1]; countercols++)
      {
			printf("  [%d,%d]:%g",counterrows+1,countercols+1,array[counterrows*tmparraysize[1]+countercols]);
      }
      printf("\n");
   }
	printf("\n========================================================\n");
   return 0;
}

double ddispa2(double *array,int* tmparraysize,char* arrayname)
{
   int counterrows ;
   int countercols ;
   
	printf("\n========================================================");
	printf("\n%s:\n",arrayname);
	for(counterrows = 0; counterrows < tmparraysize[0]; counterrows++)
	{
      for(countercols = 0; countercols < tmparraysize[1]; countercols++)
      {
			printf("  [%d,%d]:%g",counterrows+1,countercols+1,array[counterrows*tmparraysize[1]+countercols]);
      }
      printf("\n");
   }
	printf("\n========================================================\n");
   return 0;
}


double cdispa2(floatComplex *array,int* tmparraysize,char* arrayname)
{
   int counterrows ;
   int countercols ;
   
	printf("\n========================================================");
	printf("\n%s:\n",arrayname);
	for(counterrows = 0; counterrows < tmparraysize[0]; counterrows++)
	{
      for(countercols = 0; countercols < tmparraysize[1]; countercols++)
      {
			printf("  [%d,%d]:(%g,%g)",counterrows+1,countercols+1,
            creals(array[counterrows*tmparraysize[1]+countercols]),
            cimags(array[counterrows*tmparraysize[1]+countercols]));
      }
      printf("\n");
   }
	printf("\n========================================================\n");
   return 0;
}

double zdispa2(doubleComplex *array,int* tmparraysize,char* arrayname)
{
   int counterrows ;
   int countercols ;
   
	printf("\n========================================================");
	printf("\n%s:\n",arrayname);
	for(counterrows = 0; counterrows < tmparraysize[0]; counterrows++)
	{
      for(countercols = 0; countercols < tmparraysize[1]; countercols++)
      {
			printf("  [%d,%d]:(%g,%g)",counterrows+1,countercols+1,
            zreals(array[counterrows*tmparraysize[1]+countercols]),
            zimags(array[counterrows*tmparraysize[1]+countercols]));
      }
      printf("\n");
   }
	printf("\n========================================================\n");
   return 0;
}

double idispa2(int *array,int* tmparraysize,char* arrayname)
{
   int counterrows ;
   int countercols ;
   
	printf("\n========================================================");
	printf("\n%s:\n",arrayname);
	for(counterrows = 0; counterrows < tmparraysize[0]; counterrows++)
	{
      for(countercols = 0; countercols < tmparraysize[1]; countercols++)
      {
			printf("  [%d,%d]:%d",counterrows+1,countercols+1,array[counterrows*tmparraysize[1]+countercols]);
      }
      printf("\n");
   }
	printf("\n========================================================\n");
   return 0;
}

double g2dispd0(char *array,int* tmparraysize)
{
   int counterrows;
   /*int countercols;*/
   /*
	//~ printf("\n");
	//~ printf("\n%s:\n",arrayname);
   */
	for(counterrows = 0; counterrows < tmparraysize[0]; counterrows++)
	{
      printf("\n");
      printf("%s",array);
      printf("\n");
   }
   return 0;
}


