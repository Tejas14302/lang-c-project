#include<stdio.h>

int main()
{
	char i='A',N='Z';
	do{
		printf("%c ",i);
		i+=4;
	}while(i<=N);
}
/*
	output:
	A E I M Q U Y

*/