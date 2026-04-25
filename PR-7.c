#include<stdio.h>
int a,b;

void num(){
	
	printf("Enter the value of A:");
	scanf("%d",&a);
	printf("Enter the value of B:");
	scanf("%d",&b);
}

int sum(){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int mul(int a,int b){
	return a*b;
}
int div(int a,int b){
	return a/b;
}
int mod(int a,int b){
	return a%b;
}
int main(){
	int c;
	while(1){
		num();
		printf("Press 1 for +\nPress 2 for -\nPress 3 for *\nPress 4 for /\nPress 5 for %c\nPress 0 for exit.",37);
		printf("\nYour choice:");
		scanf("%d",&c);
		if(c==0){
			return 0;
		}else{
			switch(c){
				case 1:
					printf("Ans:%d\n\n",sum());
					break;
				case 2:
					printf("Ans:%d\n\n",sub(a,b));
					break;
				case 3:
					printf("Ans:%d\n\n",mul(a,b));
					break;
				case 4:
					printf("Ans:%d\n\n",div(a,b));
					break;
				case 5:
					printf("Ans:%d\n\n",mod(a,b));
					break;
				default:
					printf("Wrong choice!!!\n\n");			
			}
		}
	}
	
}
/*
	output:
	Enter the value of A:1
	Enter the value of B:2
	Press 1 for +
	Press 2 for -
	Press 3 for *
	Press 4 for /
	Press 5 for %
	Press 0 for exit.
	Your choice:1
	Ans:3

	Enter the value of A:2
	Enter the value of B:3
	Press 1 for +
	Press 2 for -
	Press 3 for *
	Press 4 for /
	Press 5 for %
	Press 0 for exit.
	Your choice:2
	Ans:-1

	Enter the value of A:3
	Enter the value of B:4
	Press 1 for +
	Press 2 for -
	Press 3 for *
	Press 4 for /
	Press 5 for %
	Press 0 for exit.
	Your choice:3
	Ans:12

	Enter the value of A:4
	Enter the value of B:5
	Press 1 for +
	Press 2 for -
	Press 3 for *
	Press 4 for /
	Press 5 for %
	Press 0 for exit.
	Your choice:4
	Ans:0

	Enter the value of A:5
	Enter the value of B:6
	Press 1 for +
	Press 2 for -
	Press 3 for *
	Press 4 for /
	Press 5 for %
	Press 0 for exit.
	Your choice:5
	Ans:5

	Enter the value of A:6
	Enter the value of B:7
	Press 1 for +
	Press 2 for -
	Press 3 for *
	Press 4 for /
	Press 5 for %
	Press 0 for exit.
	Your choice:9
	Wrong choice!!!

	Enter the value of A:7
	Enter the value of B:8
	Press 1 for +
	Press 2 for -
	Press 3 for *
	Press 4 for /
	Press 5 for %
	Press 0 for exit.
	Your choice:0
*/