#include<stdio.h>

int main()
{
	int marks,grade;
	printf("Enter your marks:");
	scanf("%d",&marks);
	marks>85 
		? (grade='A') 
		: (marks>70 ? (grade='B') : (marks>60 ? (grade='C') : (marks>35 ? (grade='D') : (grade='F'))));
	switch(grade){
		case 'A':
			printf("Grade A.");
			printf("Exellent work! ");
			break;
		case 'B':
			printf("Grade B.");
			printf("Well done! ");
			break;
		case 'C':
			printf("Grade C.");
			printf("Good job! ");
			break;
		case 'D':
			printf("Grade D.");
			printf("You passed,but you could do better! ");
			break;
		default:
			printf("Grade F.");
			printf("sorry,you failed. ");				
	}
	if(marks<35){
		printf("Please try again next time.");
	}else{
		printf("Congratulation! You are eligible for the next level.");
	}
}
/*
	output:
	1.Enter your marks:100
	  Grade A.Exellent work!
	  
	2.Enter your marks:55
	  Grade D.You passed,but you could do better! Congratulation! You are eligible for the next level.
	
*/
