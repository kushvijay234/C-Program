/*  C program to check whether a number is positive, negative or zero 

		Example
			Input
			Input number: 23
			Output
			
			23 is positive

 */
 
 #include <stdio.h>
  main()
 {
 	int num;
 	printf("Enter the number");
 	scanf("%d", &num);
 	
 	int result = num;
 	
 	if (result > 0)
	{
 		printf("Number is Positive");
	} else if (result < 0) 
	{
			printf("Number is Negative");
	} else 
	{
		printf("Number is equal to Zero ");
	}
 }
