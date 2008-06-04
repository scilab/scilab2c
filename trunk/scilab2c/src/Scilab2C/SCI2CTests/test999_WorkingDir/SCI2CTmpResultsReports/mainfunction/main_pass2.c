/*
** -------------------------------------
** --- Global Variables Declaration. ---
** -------------------------------------
*/
 
 
/*
** -----------------------------------------
** --- End Global Variables Declaration. ---
** -----------------------------------------
*/
 
/*
  SCI2C: ------------------------------------------------------------------
  SCI2C: //SCI2C: DEFAULT_PRECISION= DOUBLE
  SCI2C: 
  SCI2C: function mainfunction()
  SCI2C: ------------------------------------------------------------------
*/
SCI2Cint main()
{
/*
** -----------------------------
** --- Variable Declaration. ---
** -----------------------------
*/
 
   double a = 1;
 
   double b = 2;
 
   double c = 0;
 
   double ans1;
 
   double __temp1[1][3];
   SCI2Cint ____temp1Size[2] = {1,3};
 
   double __temp2[3][1];
   SCI2Cint ____temp2Size[2] = {3,1};
 
   double __temp3[1][6];
   SCI2Cint ____temp3Size[2] = {1,6};
 
   double x[3][6];
   SCI2Cint __xSize[2] = {3,6};
 
   double __temp4[3][6];
   SCI2Cint ____temp4Size[2] = {3,6};
 
   double __temp5[3][6];
   SCI2Cint ____temp5Size[2] = {3,6};
 
   double __temp6[3][6];
   SCI2Cint ____temp6Size[2] = {3,6};
 
   double __temp7[3][6];
   SCI2Cint ____temp7Size[2] = {3,6};
 
   double y[3][6];
   SCI2Cint __ySize[2] = {3,6};
 
   double ans2;
 
   double __temp8[3][6];
   SCI2Cint ____temp8Size[2] = {3,6};
 
   double __temp9[3][6];
   SCI2Cint ____temp9Size[2] = {3,6};
 
   double ans3;
 
   double __temp10[3][6];
   SCI2Cint ____temp10Size[2] = {3,6};
 
   double __temp11[3][6];
   SCI2Cint ____temp11Size[2] = {3,6};
 
   double __temp12[3][6];
   SCI2Cint ____temp12Size[2] = {3,6};
 
   double __temp13[3][6];
   SCI2Cint ____temp13Size[2] = {3,6};
 
   double __temp14[3][6];
   SCI2Cint ____temp14Size[2] = {3,6};
 
   double __temp15[3][6];
   SCI2Cint ____temp15Size[2] = {3,6};
 
   double __temp16[3][6];
   SCI2Cint ____temp16Size[2] = {3,6};
 
   double __temp17[3][6];
   SCI2Cint ____temp17Size[2] = {3,6};
 
   double __temp18[3][6];
   SCI2Cint ____temp18Size[2] = {3,6};
 
   double __temp19[3][6];
   SCI2Cint ____temp19Size[2] = {3,6};
 
   double __temp20[3][6];
   SCI2Cint ____temp20Size[2] = {3,6};
 
   double __temp21[3][6];
   SCI2Cint ____temp21Size[2] = {3,6};
 
   double w[3][6];
   SCI2Cint __wSize[2] = {3,6};
 
   double __temp22[3][6];
   SCI2Cint ____temp22Size[2] = {3,6};
 
   double __temp23[3][6];
   SCI2Cint ____temp23Size[2] = {3,6};
 
   double __temp24[3][6];
   SCI2Cint ____temp24Size[2] = {3,6};
 
   double distxw[3][6];
   SCI2Cint __distxwSize[2] = {3,6};
 
   double ans4;
 
 
 
 
/*
** ---------------------------------
** --- End Variable Declaration. ---
** ---------------------------------
*/
/*
** ---------------
** --- C code. ---
** ---------------
*/
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // ------------------------------
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // --- Simple Scalar Addition ---
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // ------------------------------
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: a = 1;
     SCI2C: ##################################################################*/
   a = d0OpEquald0(1);
 
   /*SCI2C: ##################################################################
     SCI2C: b = 2;
     SCI2C: ##################################################################*/
   b = d0OpEquald0(2);
 
   /*SCI2C: ##################################################################
     SCI2C: c = 0;
     SCI2C: ##################################################################*/
   c = d0OpEquald0(0);
 
   /*SCI2C: ##################################################################
     SCI2C: c = a + b;
     SCI2C: ##################################################################*/
   c = d0d0OpPlusd0(a,b);
 
   /*SCI2C: ##################################################################
     SCI2C: disp(c);
     SCI2C: ##################################################################*/
   ans1 = d0dispd0(c);
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // ------------------------------
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // --- Trigonometric Identity ---
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // ------------------------------
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: x = (1:3)' * (4:9);
     SCI2C: ##################################################################*/
   d0d0OpColond2(1,3,(double* )__temp1);
   d2OpApexd2((double* )__temp1,  ____temp1Size,(double* )__temp2);
   d0d0OpColond2(4,9,(double* )__temp3);
   d2d2OpStard2((double* )__temp2,  ____temp2Size,(double* )__temp3,  ____temp3Size,(double* )x);
 
   /*SCI2C: ##################################################################
     SCI2C: y = (sin(x).^2) + (cos(x).^2);
     SCI2C: ##################################################################*/
   d2sind2((double* )x,  __xSize,(double* )__temp4);
   d2d0OpDotHatd2((double* )__temp4,  ____temp4Size,2,(double* )__temp5);
   d2cosd2((double* )x,  __xSize,(double* )__temp6);
   d2d0OpDotHatd2((double* )__temp6,  ____temp6Size,2,(double* )__temp7);
   d2d2OpPlusd2((double* )__temp5,  ____temp5Size,(double* )__temp7,  ____temp7Size,(double* )y);
 
   /*SCI2C: ##################################################################
     SCI2C: disp(x);
     SCI2C: ##################################################################*/
   ans2 = d2dispd0((double* )x,  __xSize);
 
   /*SCI2C: ##################################################################
     SCI2C: disp(y-ones(3,6));
     SCI2C: ##################################################################*/
   d0d0onesd2(3,6,(double* )__temp8);
   d2d2OpMinusd2((double* )y,  __ySize,(double* )__temp8,  ____temp8Size,(double* )__temp9);
   ans3 = d2dispd0((double* )__temp9,  ____temp9Size);
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // -------------------------------
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // --- Computation of Distance ---
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // -------------------------------
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // generate a vector w 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: w = cos(sin(cos(x*3)*2).* x+ones(3,6).*cos(x-sin(y*2))); 
     SCI2C: ##################################################################*/
   d2d0OpStard2((double* )x,  __xSize,3,(double* )__temp10);
   d2cosd2((double* )__temp10,  ____temp10Size,(double* )__temp11);
   d2d0OpStard2((double* )__temp11,  ____temp11Size,2,(double* )__temp12);
   d2sind2((double* )__temp12,  ____temp12Size,(double* )__temp13);
   d2d2OpDotStard2((double* )__temp13,  ____temp13Size,(double* )x,  __xSize,(double* )__temp14);
   d0d0onesd2(3,6,(double* )__temp15);
   d2d0OpStard2((double* )y,  __ySize,2,(double* )__temp16);
   d2sind2((double* )__temp16,  ____temp16Size,(double* )__temp17);
   d2d2OpMinusd2((double* )x,  __xSize,(double* )__temp17,  ____temp17Size,(double* )__temp18);
   d2cosd2((double* )__temp18,  ____temp18Size,(double* )__temp19);
   d2d2OpDotStard2((double* )__temp15,  ____temp15Size,(double* )__temp19,  ____temp19Size,(double* )__temp20);
   d2d2OpPlusd2((double* )__temp14,  ____temp14Size,(double* )__temp20,  ____temp20Size,(double* )__temp21);
   d2cosd2((double* )__temp21,  ____temp21Size,(double* )w);
 
   /*SCI2C: ##################################################################
     SCI2C: distxw = sqrt(x.^2 + w.^2);
     SCI2C: ##################################################################*/
   d2d0OpDotHatd2((double* )x,  __xSize,2,(double* )__temp22);
   d2d0OpDotHatd2((double* )w,  __wSize,2,(double* )__temp23);
   d2d2OpPlusd2((double* )__temp22,  ____temp22Size,(double* )__temp23,  ____temp23Size,(double* )__temp24);
   d2sqrtd2((double* )__temp24,  ____temp24Size,(double* )distxw);
 
   /*SCI2C: ##################################################################
     SCI2C: disp(distxw);
     SCI2C: ##################################################################*/
   ans4 = d2dispd0((double* )distxw,  __distxwSize);
 
   /*SCI2C: ##################################################################
     SCI2C: endfunction
     SCI2C: ##################################################################*/
 
   /*
   ** --------------------- 
   ** --- Free Section. --- 
   ** --------------------- 
   */
   /*
   ** ------------------------- 
   ** --- End Free Section. --- 
   ** ------------------------- 
   */
 
   return(0);
 
   /*SCI2C: ##################################################################
     SCI2C:    
     SCI2C: ##################################################################*/
}
 
