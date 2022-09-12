/*  C program to check Leap Year
		
		Example
			Input
			Input year: 2004
			Output

			2004 is leap year.
 */
 
 #include <stdio.h>
 main()
 {
 	int num;
 	printf("Enter the Any Number");
 	scanf("%d", &num);
 	
 	if ((num % 100 == 0) && (num % 400 == 0) || (num % 4 == 0)) 
 	{4
 	
 		printf("This is leap year ");
	}
	else {
		printf("This is not leap year ");
	} 
	 
 }

