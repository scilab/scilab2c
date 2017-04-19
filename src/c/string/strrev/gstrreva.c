#include<stdio.h>
#include "strrev.h"

void gstrreva(char* str,int size,char* out)
{
    int i=-1,j=0;
   
    while(str[++i]!='\0');

    while(i>=0)
     out[j++] = str[--i];

    out[j]='\0';
  
}
