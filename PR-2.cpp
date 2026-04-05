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
			printf("\nExellent work! ");
			break;
		case 'B':
			printf("Grade B.");
			printf("\nWell done! ");
			break;
		case 'C':
			printf("Grade C.");
			printf("\nGood job! ");
			break;
		case 'D':
			printf("Grade D.");
			printf("\nYou passed,but you could do better! ");
			break;
		default:
			printf("Grade F.");
			printf("\nsorry,you failed. ");				
	}
	if(marks<35){
		printf("\nPlease try again next time.");
	}else{
		printf("\nCongratulation! You are eligible for the next level.");
	}
}
/*
	output:
	1.Enter your marks:100
	  Grade A.
	  Exellent work!
	  Congratulation! You are eligible for the next level.
	  
	2.Enter your marks:75
	  Grade B.
	  Well done!
	  Congratulation! You are eligible for the next level.
	
	3.Enter your marks:64
	  Grade C.
	  Good job!
	  Congratulation! You are eligible for the next level.
	  
	4.Enter your marks:57
	  Grade D.
	  You passed,but you could do better!
	  Congratulation! You are eligible for the next level. 
	  
	5.Enter your marks:33
	  Grade F.
	  sorry,you failed.
	  Please try again next time.   
*/
