#include<stdio.h>

int main()
{
	float bs,hra,da,ta,gs;
	printf("Enter base salary:");
	scanf("%f",&bs);
	printf("Enter HRA:");
	scanf("%f",&hra);
	printf("Enter DA:");
	scanf("%f",&da);
	printf("Enter TA:");
	scanf("%f",&ta);
	gs=bs+hra/100*bs+da/100*bs+ta/100*bs;
	printf("The gross salary is(Rs):%0.2f",gs);
}
/*
	output
	Enter base salary:100
	Enter HRA:10
	Enter DA:5
	Enter TA:8
	The gross salary is(Rs):123.00
*/	