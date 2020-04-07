/*
Implementing the power func. (Divide & Conquer)

Time Complexity : O(logN)
Space Complexity : O(logN)
*/
#include<stdio.h>

int powFunc(int base,int n)
{
	if(n==0)
		return 1;
	
	if(n&1)
		return powFunc(base,n/2)*powFunc(base,n/2)*base;
		
	return 	powFunc(base,n/2)*powFunc(base,n/2);
}

void main()
{
	int base=2;
	int n=10;
	
	printf(" powFunc : %d ", powFunc(base,n));
}
