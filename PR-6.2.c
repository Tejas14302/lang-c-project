#include<stdio.h>
int main()
{
	char str[100];
	int i,count;
	printf("Enter a string:");
	scanf("%s",str);
	printf("\nFrequency of each letter :");
	for(i=0;str[i]!='\0';i++)
	{
		count =1;
		
		if(str[i]=='0')
		continue;
		
		for(int j=i+1;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
			count++;
			str[j]='0';
			}
		}
		printf("\n%c => %d",str[i],count);
	}
}
/*
	output:
	Enter a string:development

	Frequency of each letter :
	d => 1
	e => 3
	v => 1
	l => 1
	o => 1
	p => 1
	m => 1
	n => 1
	t => 1
*/