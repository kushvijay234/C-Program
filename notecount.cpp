/*  C program to count total number of notes in given amount  

	Example
Input
Input amount: 575
Output

Total number of notes: 
500: 1
100: 0
50: 1
20: 1
10: 0
5: 1
2: 0
1: 0


 */
 
 #include <stdio.h>
 main()
 {
 	
 	int num;
 	int note2000, note500, note200, note100, note50, note20, note10, note5, note2, note1; 
 	printf("Enter the Amount");
 	scanf("%d", &num);
 	
 	int amt = num;
 	
 	if (amt >= 2000){
 		
 		note2000 = amt/2000;
 		amt = amt - (note2000 * 2000);
	 }
	 if (amt >= 500){
 		
 		note500 = amt/500;
 		amt -= note500 * 500;
	 }
	 if (amt >= 200){
 		
 		note200 = amt/200;
 		amt -= note200 * 200;
	 }
	 if (amt >= 100){
 		
 		note100 = amt/100;
 		amt -= note100 * 100;
	 }
	 if (amt >= 50){
 		
 		note50 = amt/50;
 		amt -= note50 * 50;
	 }
	 if (amt >= 20){
 		
 		note20 = amt/20;
 		amt -= note20 * 20;
	 }
	 if (amt >= 10){
 		
 		note10 = amt/10;
 		amt -= note10 * 10;
	 }
	 if (amt >= 5){
 		
 		note5 = amt/5;
 		amt -= note5 * 5;
	 }
	 if (amt >= 2){
 		
 		note2 = amt/2;
 		amt -= note2 * 2;
	 }
	 if (amt >=  1){
	 	
		note1 = amt/1;
		amt = amt - (note1 * 1);
 	
	 }
	if (amt == 0) {
		
	}
	 
	 printf("Total number of notes = \n");
    
    printf("2000 = %d\n", note2000);
    printf("500 = %d\n", note500);
    printf("200 = %d\n", note200);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);


	
 }
