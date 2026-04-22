#include<stdio.h>

int main()
{
	int n,row,colm;
	printf("Enter number row and column:");
	scanf("%d",&n);
	int arr[n][n],a2[n][n];
	printf("Enter array elements:\n");
	for(row=0;row<n;row++){
		for(colm=0;colm<n;colm++){
			printf("a[%d][%d]:",row,colm);
			scanf("%d",&arr[row][colm]);
		}
	}
	for(row=0;row<n;row++){
		for(colm=0;colm<n;colm++){
		a2[colm][row]=arr[row][colm];
		}
	}
	printf("The tranpose matrix of the array is:\n");
	for(row=0;row<n;row++){
		for(colm=0;colm<n;colm++){
		printf("%d ",a2[row][colm]);
		}
		printf("\n");
	}
}
/*
	output:
	Enter number row and column:3
	Enter array elements:
	a[0][0]:2
	a[0][1]:4
	a[0][2]:1
	a[1][0]:3
	a[1][1]:5
	a[1][2]:4
	a[2][0]:8
	a[2][1]:2
	a[2][2]:6
	The tranpose matrix of the array is:
	2 3 8
	4 5 2
	1 4 6
*/