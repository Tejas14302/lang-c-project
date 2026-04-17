#include<stdio.h>

int main()
{
	int row,colm;
	for(row=1;row<=5;row++){
		if(row==1||row==3){
			for(colm=1;colm<=5;colm++){
				printf("* ");
			}
		}
		else if(row==2){
			for(colm=1;colm<=5;colm++){
			if(colm==1||colm==5){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		}else{
			printf("*");
		}printf("\n");
	}
}
/*
	output:
	* * * * *
	*       *
	* * * * *
	*
	*

*/