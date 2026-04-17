#include<stdio.h>

int main()
{
	int row,colm,num=11;
	for(row=1;row<=4;row++){
		for(colm=1;colm<=row;colm++){
		printf("%d ",num);
		num++;
		}printf("\n");
	}
}
/*
	output:
	11
	12 13
	14 15 16
	17 18 19 20
*/