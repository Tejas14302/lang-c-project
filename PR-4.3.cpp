#include<stdio.h>

int main()
{
	int row,colm,sp;
	for(row=5;row>=1;row--){
		for(sp=1;sp<row;sp++){
			printf("  ");
		}for(colm=row;colm<=5;colm++){
			printf("%d ",colm);
		}printf("\n");
	}
}
/*
	output:
	    5
      4 5
    3 4 5
  2 3 4 5
1 2 3 4 5

*/