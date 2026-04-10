#include<stdio.h>

int main()
{
	int n,f,l;
	printf("Enter any number:");
	scanf("%d",&n);
	if(n<0){
		n=-n;
	}
	l=n%10;
	while(n>=10){
		n=n/10;
		f=n;
		}
	printf("The sum of the first and last digit of the number is:%d",f+l);
}
/*
	output:
	1.Enter any number:1227328
	  The sum of the first and last digit of the number is:9
	 
	2.Enter any number:-1271
	  The sum of the first and last digit of the number is:2

*/
