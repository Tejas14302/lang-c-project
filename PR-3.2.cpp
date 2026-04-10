#include<stdio.h>

int main()
{
	int i=0,n;
	printf("Enter any number:");
	scanf("%d",&n);
	if(n==0){
		i=1;
		}
	else if(n<0){
		n=-n;	
		}	
	while(n>0){
		i++;
		n=n/10;
	}
	printf("Total number of digits:%d",i);
}
/*
	output:
	Enter any number:100
	Total number of digits:3

*/