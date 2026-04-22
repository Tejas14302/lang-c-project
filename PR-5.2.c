#include<stdio.h>

int main()
{
	int row,colm,n,m;
	printf("Enter row:");
	scanf("%d",&n);
	printf("Enter column:");
	scanf("%d",&m);
	printf("Enter array Elements:\n");
	int arr[n][m];
	for(row=0;row<n;row++){
		for(colm=0;colm<m;colm++){
			printf("a[%d][%d]:",row,colm);
			scanf("%d",&arr[row][colm]);
		}
	}
	int largs=arr[0][0];
	for(row=0;row<n;row++){
		for(colm=0;colm<m;colm++){
			if(arr[row][colm]>=largs){
				largs=arr[row][colm];
			}
		}
	}
	printf("The largest element is:%d",largs);
}
/*
	output:
	Enter row:3
	Enter column:3
	Enter array Elements:
	a[0][0]:2
	a[0][1]:7
	a[0][2]:1
	a[1][0]:3
	a[1][1]:5
	a[1][2]:4
	a[2][0]:8
	a[2][1]:9
	a[2][2]:6
	The largest element is:9
*/