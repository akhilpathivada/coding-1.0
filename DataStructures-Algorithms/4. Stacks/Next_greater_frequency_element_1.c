/*
Given an array, for each element find the value of nearest element to the right which is having frequency greater than as that of current element.
If there does not exist an answer for a position, then make the value ‘-1’.

Elements in the Array : -1 < X < n

Time Complexity : O(n^2)
Space Complexity : O(1)
*/
#include<stdio.h>
#include<string.h>

void Push( int *stack, int *top, int index)
{
	stack[++*top] = index;
}

void Pop(int *top)
{
	(*top)--;
}

void printNGFE( int *arr, int n)
{
	for(int i=0; i<n; i++)
		printf(" %d,",arr[i]);	
}

void getNGFE( int *arr, int *ngfe, int n)
{
	int freq[n];
	
	memset(freq, 0, n*sizeof(*freq));
	
	// Computing the Frequency array
	for(int i=0; i<n; ++i)
		freq[arr[i]]++;
		
	memset(ngfe, -1, n*sizeof(*ngfe));
	
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; ++j)
		{
			if(freq[arr[j]] > freq[arr[i]])
			{
				ngfe[i] = arr[j];
				
				break;
			}
		}
	}
}

void main()
{
	
	int arr[] = {1, 1, 2, 3, 4, 2, 1};
	
	int size = sizeof(arr)/sizeof(*arr);
	
	int ngfe[size];
	
	getNGFE(arr,ngfe,size);	
	
	printNGFE(ngfe,size);
} 
