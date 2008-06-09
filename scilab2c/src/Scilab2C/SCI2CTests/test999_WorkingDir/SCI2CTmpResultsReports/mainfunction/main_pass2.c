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
 
   double __temp1[1][2];
   SCI2Cint ____temp1Size[2] = {1,2};
 
   double __temp2[1][3];
   SCI2Cint ____temp2Size[2] = {1,3};
 
   double __temp3[1][4];
   SCI2Cint ____temp3Size[2] = {1,4};
 
   double __temp4[1][5];
   SCI2Cint ____temp4Size[2] = {1,5};
 
   double Volume[1][6];
   SCI2Cint __VolumeSize[2] = {1,6};
 
   double __temp5[1][2];
   SCI2Cint ____temp5Size[2] = {1,2};
 
   double __temp6[1][3];
   SCI2Cint ____temp6Size[2] = {1,3};
 
   double __temp7[1][4];
   SCI2Cint ____temp7Size[2] = {1,4};
 
   double __temp8[1][5];
   SCI2Cint ____temp8Size[2] = {1,5};
 
   double Pressure[1][6];
   SCI2Cint __PressureSize[2] = {1,6};
 
   double x[1][6];
   SCI2Cint __xSize[2] = {1,6};
 
   double y[1][6];
   SCI2Cint __ySize[2] = {1,6};
 
   double __temp9;
 
   double __temp10[1][6];
   SCI2Cint ____temp10Size[2] = {1,6};
 
   double __temp11;
 
   double __temp12;
 
   double __temp13;
 
   double __temp14[1][6];
   SCI2Cint ____temp14Size[2] = {1,6};
 
   double __temp15;
 
   double __temp16;
 
   double __temp17;
 
   double __temp18;
 
   double __temp19[1][6];
   SCI2Cint ____temp19Size[2] = {1,6};
 
   double __temp20;
 
   double __temp21;
 
   double __temp22;
 
   double __temp23;
 
   double __temp24;
 
   double __temp25;
 
   double a;
 
   double __temp26;
 
   double __temp27[1][6];
   SCI2Cint ____temp27Size[2] = {1,6};
 
   double __temp28;
 
   double __temp29;
 
   double __temp30;
 
   double __temp31;
 
   double __temp32;
 
   double __temp33;
 
   double __temp34;
 
   double __temp35[1][6];
   SCI2Cint ____temp35Size[2] = {1,6};
 
   double __temp36;
 
   double __temp37;
 
   double __temp38;
 
   double __temp39;
 
   double __temp40;
 
   double __temp41;
 
   double b;
 
   double __temp42;
 
   double __temp43[1][6];
   SCI2Cint ____temp43Size[2] = {1,6};
 
   double __temp44;
 
   double __temp45[1][6];
   SCI2Cint ____temp45Size[2] = {1,6};
 
   double __temp46[1][6];
   SCI2Cint ____temp46Size[2] = {1,6};
 
   double __temp47;
 
   double __temp48;
 
   double __temp49[1][6];
   SCI2Cint ____temp49Size[2] = {1,6};
 
   double __temp50[1][6];
   SCI2Cint ____temp50Size[2] = {1,6};
 
   double __temp51;
 
   double beq;
 
   double __temp52;
 
   double __temp53;
 
   double __temp54;
 
   double aeq;
 
   double C;
 
   double gamma;
 
   char __temp55[1][2] = {"C"};
   SCI2Cint ____temp55Size[2] = {1,2};
 
   double ans1;
 
   double ans2;
 
   char __temp56[1][6] = {"gamma"};
   SCI2Cint ____temp56Size[2] = {1,6};
 
   double ans3;
 
   double ans4;
 
   char __temp57[1][6] = {"a-aeq"};
   SCI2Cint ____temp57Size[2] = {1,6};
 
   double ans5;
 
   double __temp58;
 
   double ans6;
 
   char __temp59[1][6] = {"b-beq"};
   SCI2Cint ____temp59Size[2] = {1,6};
 
   double ans7;
 
   double __temp60;
 
   double ans8;
 
 
 
 
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
     SCI2C: // Knowing that 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // (1) P * (V^gamma) = C
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // Where
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // P = Pressure
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // V = Volume
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // gamma,C = constants depending on the particular gas used.
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // (2) log10(P) = log10(C) - gamma*log10(V)
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // (3) x = log10(V) 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // (4) y = log10(P)
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // than (2) becomes:
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // y = a + b*x;
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // Where
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // a = log10(C)
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // b = -gamma
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // Then thanks to this transformation it is possible to perform 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // a linear regression to estimate gamma and C!
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: Volume   = [54.3 61.8 72.4 88.7 118.6 194.0];
     SCI2C: ##################################################################*/
   d0d0OpRcd2(54.3,61.8,(double* )__temp1);
   d2d0OpRcd2((double* )__temp1,  ____temp1Size,72.4,(double* )__temp2);
   d2d0OpRcd2((double* )__temp2,  ____temp2Size,88.7,(double* )__temp3);
   d2d0OpRcd2((double* )__temp3,  ____temp3Size,118.6,(double* )__temp4);
   d2d0OpRcd2((double* )__temp4,  ____temp4Size,194,(double* )Volume);
 
   /*SCI2C: ##################################################################
     SCI2C: Pressure = [61.2 49.5 37.6 28.4 19.2 10.1];
     SCI2C: ##################################################################*/
   d0d0OpRcd2(61.2,49.5,(double* )__temp5);
   d2d0OpRcd2((double* )__temp5,  ____temp5Size,37.6,(double* )__temp6);
   d2d0OpRcd2((double* )__temp6,  ____temp6Size,28.4,(double* )__temp7);
   d2d0OpRcd2((double* )__temp7,  ____temp7Size,19.2,(double* )__temp8);
   d2d0OpRcd2((double* )__temp8,  ____temp8Size,10.1,(double* )Pressure);
 
   /*SCI2C: ##################################################################
     SCI2C: x = log10(Volume);
     SCI2C: ##################################################################*/
   d2log10d2((double* )Volume,  __VolumeSize,(double* )x);
 
   /*SCI2C: ##################################################################
     SCI2C: y = log10(Pressure);
     SCI2C: ##################################################################*/
   d2log10d2((double* )Pressure,  __PressureSize,(double* )y);
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: a = (sum(y)*sum(x.^2)-sum(x)*sum(x.*y))./(length(x)*sum(x.^2)-sum(x).*sum(x));
     SCI2C: ##################################################################*/
   __temp9 = d2sumd0((double* )y,  __ySize);
   d2d0OpDotHatd2((double* )x,  __xSize,2,(double* )__temp10);
   __temp11 = d2sumd0((double* )__temp10,  ____temp10Size);
   __temp12 = d0d0OpStard0(__temp9,__temp11);
   __temp13 = d2sumd0((double* )x,  __xSize);
   d2d2OpDotStard2((double* )x,  __xSize,(double* )y,  __ySize,(double* )__temp14);
   __temp15 = d2sumd0((double* )__temp14,  ____temp14Size);
   __temp16 = d0d0OpStard0(__temp13,__temp15);
   __temp17 = d0d0OpMinusd0(__temp12,__temp16);
   __temp18 = d2lengthd0((double* )x,  __xSize);
   d2d0OpDotHatd2((double* )x,  __xSize,2,(double* )__temp19);
   __temp20 = d2sumd0((double* )__temp19,  ____temp19Size);
   __temp21 = d0d0OpStard0(__temp18,__temp20);
   __temp22 = d2sumd0((double* )x,  __xSize);
   __temp23 = d2sumd0((double* )x,  __xSize);
   __temp24 = d0d0OpDotStard0(__temp22,__temp23);
   __temp25 = d0d0OpMinusd0(__temp21,__temp24);
   a = d0d0OpDotSlashd0(__temp17,__temp25);
 
   /*SCI2C: ##################################################################
     SCI2C: b = (length(x)*sum(x.*y)-sum(x)*sum(y))./(length(x)*sum(x.^2)-sum(x).*sum(x));
     SCI2C: ##################################################################*/
   __temp26 = d2lengthd0((double* )x,  __xSize);
   d2d2OpDotStard2((double* )x,  __xSize,(double* )y,  __ySize,(double* )__temp27);
   __temp28 = d2sumd0((double* )__temp27,  ____temp27Size);
   __temp29 = d0d0OpStard0(__temp26,__temp28);
   __temp30 = d2sumd0((double* )x,  __xSize);
   __temp31 = d2sumd0((double* )y,  __ySize);
   __temp32 = d0d0OpStard0(__temp30,__temp31);
   __temp33 = d0d0OpMinusd0(__temp29,__temp32);
   __temp34 = d2lengthd0((double* )x,  __xSize);
   d2d0OpDotHatd2((double* )x,  __xSize,2,(double* )__temp35);
   __temp36 = d2sumd0((double* )__temp35,  ____temp35Size);
   __temp37 = d0d0OpStard0(__temp34,__temp36);
   __temp38 = d2sumd0((double* )x,  __xSize);
   __temp39 = d2sumd0((double* )x,  __xSize);
   __temp40 = d0d0OpDotStard0(__temp38,__temp39);
   __temp41 = d0d0OpMinusd0(__temp37,__temp40);
   b = d0d0OpDotSlashd0(__temp33,__temp41);
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // Other way to compute a and b
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: beq = sum((x-mean(x)).*(y-mean(y)))./sum((x-mean(x)).^2);
     SCI2C: ##################################################################*/
   __temp42 = d2meand0((double* )x,  __xSize);
   d2d0OpMinusd2((double* )x,  __xSize,__temp42,(double* )__temp43);
   __temp44 = d2meand0((double* )y,  __ySize);
   d2d0OpMinusd2((double* )y,  __ySize,__temp44,(double* )__temp45);
   d2d2OpDotStard2((double* )__temp43,  ____temp43Size,(double* )__temp45,  ____temp45Size,(double* )__temp46);
   __temp47 = d2sumd0((double* )__temp46,  ____temp46Size);
   __temp48 = d2meand0((double* )x,  __xSize);
   d2d0OpMinusd2((double* )x,  __xSize,__temp48,(double* )__temp49);
   d2d0OpDotHatd2((double* )__temp49,  ____temp49Size,2,(double* )__temp50);
   __temp51 = d2sumd0((double* )__temp50,  ____temp50Size);
   beq = d0d0OpDotSlashd0(__temp47,__temp51);
 
   /*SCI2C: ##################################################################
     SCI2C: aeq = mean(y)-mean(x)*beq;
     SCI2C: ##################################################################*/
   __temp52 = d2meand0((double* )y,  __ySize);
   __temp53 = d2meand0((double* )x,  __xSize);
   __temp54 = d0d0OpStard0(__temp53,beq);
   aeq = d0d0OpMinusd0(__temp52,__temp54);
 
   /*SCI2C: ##################################################################
     SCI2C: 
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: C = 10 .^a;
     SCI2C: ##################################################################*/
   C = d0d0OpDotHatd0(10,a);
 
   /*SCI2C: ##################################################################
     SCI2C: gamma = -b;
     SCI2C: ##################################################################*/
   gamma = d0OpMinusd0(b);
 
   /*SCI2C: ##################################################################
     SCI2C: disp('C')
     SCI2C: ##################################################################*/
   ans1 = g2dispd0((char* )__temp55,  ____temp55Size);
 
   /*SCI2C: ##################################################################
     SCI2C: disp(C)
     SCI2C: ##################################################################*/
   ans2 = d0dispd0(C);
 
   /*SCI2C: ##################################################################
     SCI2C: disp('gamma');
     SCI2C: ##################################################################*/
   ans3 = g2dispd0((char* )__temp56,  ____temp56Size);
 
   /*SCI2C: ##################################################################
     SCI2C: disp(gamma);
     SCI2C: ##################################################################*/
   ans4 = d0dispd0(gamma);
 
   /*SCI2C: ##################################################################
     SCI2C: disp('a-aeq');
     SCI2C: ##################################################################*/
   ans5 = g2dispd0((char* )__temp57,  ____temp57Size);
 
   /*SCI2C: ##################################################################
     SCI2C: disp(a-aeq)
     SCI2C: ##################################################################*/
   __temp58 = d0d0OpMinusd0(a,aeq);
   ans6 = d0dispd0(__temp58);
 
   /*SCI2C: ##################################################################
     SCI2C: disp('b-beq')
     SCI2C: ##################################################################*/
   ans7 = g2dispd0((char* )__temp59,  ____temp59Size);
 
   /*SCI2C: ##################################################################
     SCI2C: disp(b-beq)
     SCI2C: ##################################################################*/
   __temp60 = d0d0OpMinusd0(b,beq);
   ans8 = d0dispd0(__temp60);
 
   /*SCI2C: ##################################################################
     SCI2C: // plot(Volume,Pressure);
     SCI2C: ##################################################################*/
 
   /*SCI2C: ##################################################################
     SCI2C: // plot(Volume,(C ./(Volume.^gamma)),'r')
     SCI2C: ##################################################################*/
 
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
 
