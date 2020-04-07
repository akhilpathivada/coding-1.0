/*
Implementing the power func.

Time Complexity : O(n)
Space Complexity : O(1)
*/
#include<stdio.h>

int powFunc(int base,int n)
{
	int res=1;
	
	for( ;n>0; --n)
		res*=base;
	
	return res;
}

void main()
{
	int base=2;
	int n=10;
	
	printf(" powFunc : %d ", powFunc(base,n));
}
