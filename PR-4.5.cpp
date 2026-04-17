#include<stdio.h>

int main()
{
	int row,colm,sp,n;
	for(row=5;row>=1;row--){
		for(sp=1;sp<row;sp++){
			printf("  ");
		}
		for(colm=row;colm<=5;colm++){
			printf("%d ",colm);
		}
		for(n=5;n>row;n--){
			printf("%d ",n);
		}printf("\n");
	}
}

/*
	output:
	        5
	      4 5 5
	    3 4 5 5 4
	  2 3 4 5 5 4 3
	1 2 3 4 5 5 4 3 2
*/