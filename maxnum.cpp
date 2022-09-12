/* C program to find maximum between two numbers 

-----------------Example--------------------
Input
Input num1: 10
Input num2: 20
---------------------------------
Output

Maximum = 20


*/

#include <stdio.h>
int main()
{
	double num1;
	double num2;
	
	printf("Enter the first Number");
	scanf("%lf", &num1);
	printf("Enter the Second Number");
	scanf("%lf", &num2);
	
	if (num1>num2)
	{
		printf( "%lf is Maximun number", num1  );
	}
	else if (num1<num2)
	{
		printf("%lf is Maximun number", num2 );
	}
	else {
		
		printf(" Both Number are equal" );
		
	}
	return 0;
	
}

