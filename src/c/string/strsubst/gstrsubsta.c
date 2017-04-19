#include <stdio.h>
#include <string.h>
#include "strsubst.h"
 
void gstrsubsta(char* str,int size, char* search, int size2, char* rep, int size3, char* flagmain, int size4, char* out)
{
        int i = 0, j = 0, flag = 0, start = 0;
 
    //if(flagmain[0]!='r')
    //{
        while (str[i] != '\0') 
	{
                if (str[i] == search[j]) 
		{
                        if (!flag)
                                start = i;
                        j++;
                        if (search[j] == '\0')
                                break;
                        flag = 1;
                } 
		else 
		{
                        flag = start = j = 0;
                }
                i++;
        }

        if (search[j] == '\0' && flag) 
	{
                for (i = 0; i < start; i++)
                        out[i] = str[i];
                /* rep string with another string */
                for (j = 0; j < strlen(rep); j++) 
		{
                        out[i] = rep[j];
                        i++;
                }

                /* copy remaining portion of the input string "str" */
                for (j = start + strlen(search); j < strlen(str); j++) 
		{
                        out[i] = str[j];
                        i++;
                }

                /* print the out string */
                out[i] = '\0';
                //printf("Output: %s\n", out);
        } 
	else 
	{
                printf("%s is not a searching of %s\n", search, str);
        }
 //   }

}
