#include "ascii.h"
#include "sum.h"
#include<stdio.h>

int sum(char *a)
{
	int s=0,i=0;
    	while(a[i])
    	{
         	a[i++];
         	s=s+a[i];
    	}
    	printf("\nSUM = %d",s);
}
