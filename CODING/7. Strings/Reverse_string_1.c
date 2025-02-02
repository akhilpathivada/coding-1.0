/* 
Program to reverse string

Time Complexity : O(N)
Space Complexity : O(1)
*/

#include<stdio.h>
#include<string.h>

char* reverse(char *str) {

	int i = 0;
	int j = strlen(str) - 1;

	while(i < j) {

		char temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		++i, --j;
	}
	return str;
}

int main() {

	char str[] = "geeksforgeeks";

	printf("Reverse of the String : %s ", reverse(str));
}
