#include<stdio.h>

int main()
{
	int n,i;
	printf("Enter the array size:");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements:\n");
	for(i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&arr[i]);
	}
	printf("\nNegative elements from the array are:");
	for(i=0;i<=n;i++){
		if(arr[i]<0){
			printf("%d, ",arr[i]);
		}
	}

}
/*
	output:
	Enter the array size:5
	
	Enter the elements:
	a[0]=2
	a[1]=-4
	a[2]=1
	a[3]=-3
	a[4]=-5

	Negative elements from the array are:-4, -3, -5,

*/