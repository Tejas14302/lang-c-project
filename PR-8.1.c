#include<stdio.h>

int main(){
	int length=0;
	char str[500];
	char *ptr;
	printf("Enter any string:");
	gets(str);
	for(ptr=str;*ptr!='\0';ptr++){
		length++;
	}
	printf("The length of The string is:%d",length);
}
/*
	output:
	Enter any string:Hello World
	The length of The string is:11
*/