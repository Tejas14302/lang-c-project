#include<stdio.h>

int main()
{
	float C,F;
	printf("Enter Temperature(celsius):");
	scanf("%f",&C);
	F=(C*9/5)+32;
	printf("The Temperature in fahrenheit:%0.2f",F);
}
/*
	output
	Enter Temperature(celsius):38
	The Temperature in fahrenheit:100.40
*/