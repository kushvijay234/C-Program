/*  C program to check whether a character is alphabet or not  
		
	Example
	Input
	Input character: a
	Output

		'a' is vowel

*/
#include <stdio.h>
 main()
 {
 	int num;
 	printf("Enter the Any Character");
 	scanf("%c", &num);
 	
 	int ch=num;
 	if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
 	
	 printf("It is Vowel");	
 		
	}
	else {
		
		printf("It is Constant");
		
	}
}
