 #include <stdio.h>
 
 
 int main () {
 	int a , b, c ;
 	int sum , avg;
 	printf("Enter Number : " );
 	scanf("%d", &a);
 	printf("Enter Number : " );
 	scanf("%d", &b);
 	printf("Enter Number : " );
 	scanf("%d", &c);
 	
 	sum = a + b + c ;
 	avg = (a + b + c) /3;
 	
 	 printf(" The sum is : %d  \n" , sum);
 	 
 	 printf("The avg is : %d" , avg);
 	 
 	 return 0;
 }
