#include <stdio.h>
int main()
{
	float studentAYear1 = 4.2;
	float studentAYear2 = 4.5;
	float studentAYear3 = 4.2;
	
	float studentBYear1 = 4.3;
	float studentBYear2 = 4.4;
	float studentBYear3 = 4.7;
	
	float studentCYear1 = 4.3;
	float studentCYear2 = 4.8;
	float studentCYear3 = 4.9;
	/* your code */
	
	printf("Student name  1stYGrade  2ndYGrade  3rdYGrade  Avg");
	printf("\n%8s %9.2f  %9.2f  %9.2f  %9.2f", "StudentA", studentAYear1, studentAYear2, studentAYear3, (studentAYear1 + studentAYear2 + studentAYear3) / 3);
	printf("\n%8s %9.2f  %9.2f  %9.2f  %9.2f", "StudentB", studentBYear1, studentBYear2, studentBYear3, (studentBYear1 + studentBYear2 + studentBYear3) / 3);
	printf("\n%8s %9.2f  %9.2f  %9.2f  %9.2f", "StudentC", studentCYear1, studentCYear2, studentCYear3, (studentCYear1 + studentCYear2 + studentCYear3) / 3);

	return 0;
}