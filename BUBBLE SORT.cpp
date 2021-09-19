#include <stdio.h>

int main ()
{
	int n = 8;
	int x , i , aux , j;
    int a [8] = {8, 10, 5, 3, 7, 4, 2, 6};
    
	for(i = 0; i < n - 1; i++)
	{
		for(x = 0; x < n-i-1; x++)
		{
			
			if(a[x] > a[x+1])
			
			{
			  aux = a[x];
			  a[x] = a[x+1];
			  a[x+1] = aux;
			}	
		}	
	}
	for(i=0; i < 8; i++)
	{
		{
		 printf("%d  ",a[i]);	
		}
	}
}
