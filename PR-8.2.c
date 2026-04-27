#include<stdio.h>

int cube(int *a){
	return *a**a**a;
}
int main(){
	int row,colm,size;
	printf("Enter array size:");
	scanf("%d",&size);
	int arr[size][size];
	printf("Enter array Elements:\n");
	for(row=0;row<size;row++){
		for(colm=0;colm<size;colm++){
			printf("a[%d][%d]:",row,colm);
			scanf("%d",&arr[row][colm]);
		}
	}
	printf("output of all Elements:\n");
	for(row=0;row<size;row++){
		for(colm=0;colm<size;colm++){
			printf("%d ",cube(&arr[row][colm]));
		}
		printf("\n");
	}
}
/*
	output:
	Enter array size:2	
	Enter array Elements:
	a[0][0]:3
	a[0][1]:2
	a[1][0]:5
	a[1][1]:4
	output of all Elements:
	27 8
	125 64
*/