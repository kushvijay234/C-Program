/*  C program to check whether a character is alphabet, digit or special character
		
	Example
	Input
	Input any character: 3
	Output

	3 is digit

*/
#include <stdio.h>
 main()
 {
 	int num;
 	printf("Enter the Any alphabet, digit or special Character");
 	scanf("%c", &num);
 	
 	int ch=num;
 	if ((ch<='a' && ch>='z' )|| (ch<='A' && ch>='Z' )) {
 		printf("It is alphabet");	
	 }
	else if (ch<='0' && ch>='9') {
		printf("It is Number");
	}
	else {
		printf("special Character");
	}
 	
}
