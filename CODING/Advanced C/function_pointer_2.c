// Program for 'pointer to functions'

#include<stdio.h>

int Add(int a,int b)
{
	return a+b;
}

int Subtract(int a,int b)
{
	return a-b;
}

int main()
{
	int (*fp)(int,int);

	fp=Add;
	printf("sum = %d \n",fp(5,6));
	fp=Subtract;
	printf("diffrence = %d \n",fp(5,6));
}
