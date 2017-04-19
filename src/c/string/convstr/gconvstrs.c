#include <string.h>
#include "convstr.h"

void gconvstrs(char* in, int size,char* flag,int size2,char* out)
{
	int i=0;//temp=0;
	for(i=0;i<size;i++)
	{
		//temp= in[i];
		if(flag[0]=='l' || flag[0]=='L')
		{	//temp=temp + 32;
			out[i]=tolower(in[i]);
		}
		else if(flag[0]=='u' || flag[0]=='U')
		{
			//temp=temp - 32;
			out[i]=toupper(in[i]);
		}
	}
}
