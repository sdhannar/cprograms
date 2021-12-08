#include<stdio.h>
main()
{
	 char grade;
	 printf("Enter the grade: ");
	 scanf("%c",&grade);
	 if(grade=='E')
	 {
	 	printf("Excellent");
     }
     else if(grade=='v')
     {
     	printf("Very Good");
	 }
	 else if(grade=='G')
	 {
	 	printf("Good");
	 }
	 else if(grade=='A')
	 {
	 	printf("Average");
	 }
	 else if(grade=='F')
	 {
	 	printf("Fail");
	 }
	 else
	 {
	 	printf("Invalid");
	 }
}
