#include<stdio.h>

int main()
{
	int row,colm;
	for(row=41;row<=45;row++){
		for(colm=41;colm<=row;colm++){
			printf("%d ",colm);
		}
		printf("\n");
	}
}
/*
	output:
	41
	41 42
	41 42 43
	41 42 43 44
	41 42 43 44 45
*/