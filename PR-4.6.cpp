#include<stdio.h>

int main()
{
	int row,colm,sp;
	for(row=1;row<=5;row++){
		for(colm=1;colm<=row;colm++){
			printf("%d ",colm);
		}
		for(sp=5;sp>row;sp--){
			printf("    ");
		}
		for(colm=row;colm>=1;colm--){
			printf("%d ",colm);
		}printf("\n");
	}
}
/*
	output:
	1                 1
	1 2             2 1
	1 2 3         3 2 1
	1 2 3 4     4 3 2 1
	1 2 3 4 5 5 4 3 2 1
*/