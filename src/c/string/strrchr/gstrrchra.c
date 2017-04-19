#include <stdio.h>
#include <string.h>
#include "strrchr.h"

void gstrrchra(char* str,int size,char* key,int size2,char* out)
{
    int i,j, k=0, pos2;
   
    for (i = 0;i<size;i++)
    {
        if (key[0] == str[i])
        {
            pos2 = i;
        }
    }
	for(j=pos2;j<i;j++)
	{
		out[k]=str[j];
		k++;
	}
}
