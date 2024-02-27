#include <stdio.h>
#include <stdlib.h> 
int min(int, int);
int main() 
{
    	int  i, j, n, length, value;
        	scanf("%d", &n);
        	length  = n * 2 - 1;    
       	for (i = 0; i < length; i++)  
           {
                		for (j = 0; j < length; j++) 
                        {
                    		value = n - min( min(i,j), min(length-1-i, length-1-j));
                    		printf("%d ", value);
                		}
               		printf("\n");
        	}
        	return 0;
}

int min(int a,int b)
{
    if(a<b) return a;
    else return b;
}