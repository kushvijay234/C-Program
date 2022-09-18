/*  C program to check whether a character is alphabet or not  
		
		Example
		Input
		Input character: a
		Output

'		a' is alphabet

*/
#include <stdio.h>
 main()
 {
 	int num;
 	printf("Enter the Any Character");
 	scanf("%c", &num);
 	
 	int ch=num;
 	
 	if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
 		
 		printf("It is a Character");
	}
	else  {
		printf("It is not a Character");
	}
 	
 }

