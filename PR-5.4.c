#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("\nEnter the row size: ");
	scanf("%d",&r);
	printf("Enter the column size: ");
	scanf("%d",&c);
	printf("\nEnter array's elements:\n");
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("arr[%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);	
		}
	}
	int row ,column,SumR=0,SumC=0;
	printf("\nEnter row number: ");
	scanf("%d",&row);
	if(row<r&&row>=0)
	{
	printf("\nElements of row : ");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(row==i)
				{
					printf("%d ,",arr[i][j]);
					SumR=SumR+arr[i][j];
				}
			}
		}
		printf("\nSum of row: %d\n",SumR);
	}	
	else
	printf("Invalid row ..\n");	
	
	printf("\nEnter column number: ");
	scanf("%d",&column);
	if(column<r&&column>=0)
	{
		printf("Elements of column : ");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(column==j)
				{
					printf("%d ,",arr[i][j]);
					SumC=SumC+arr[i][j];
				}
			}
		}
		printf("\nSum of column: %d\n",SumC);
	}
	else
	printf("\nInvalid column ..");
}
/*
	output:
	Enter the row size: 3
	Enter the column size: 3

	Enter array's elements:
	arr[0][0] = 2
	arr[0][1] = 7
	arr[0][2] = 2
	arr[1][0] = 3
	arr[1][1] = 5
	arr[1][2] = 4
	arr[2][0] = 8
	arr[2][1] = 9
	arr[2][2] = 6

	Enter row number: 0

	Elements of row : 2 ,7 ,2 ,
	Sum of row: 11

	Enter column number: 2
	Elements of column : 2 ,4 ,6 ,
	Sum of column: 12
*/