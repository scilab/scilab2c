# include <stdio.h>
# include <math.h>
 
void sfactors(float in,float* out)
{
    int i=0,k=0;
    int n=(int)in;
    while (n%2 == 0)
    {
        //printf("%d ", 2);
	out[k++]=2;
        n = n/2;
    }
 
    for (i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
	    out[k++]=i;
            //printf("%d ", i);
            n = n/i;
        }
    }
 
        if (n > 2)
	{
		out[k++]=n;
        	//printf ("%d ", n);
	}
}
 
