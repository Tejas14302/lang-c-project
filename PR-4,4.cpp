#include<stdio.h>

int main()
{
	int row,colm,sp;
	for(row=5;row>=1;row--){
		for(sp=5;sp>row;sp--){
			printf("  ");
		}for(colm=1;colm<=row;colm++){
			if(colm%2==1){
				printf("1 ");
			}else{
				printf("0 ");
			}
		}printf("\n");
	}
}
/*
	output:
	1 0 1 0 1
	  1 0 1 0
	    1 0 1
	      1 0
        	1
*/