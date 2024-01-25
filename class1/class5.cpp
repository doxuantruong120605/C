#include <stdio.h>


int main () {
	int a , b , c , i , d;
	
	printf(" Enter number a : ");
	scanf("%d", &a);
	
	printf(" Enter number b: ");
	scanf("%d", &b);
	
	printf(" Enter number c: ");
	scanf("%d", &c);
	
	printf(" Enter number i: ");
	scanf("%d", &i);
	
	printf(" Enter number d: ");
	scanf("%d", &d);
	
	int kq1 = ++i % 7;
	int kq2 = i++ % 7;
	int kq3 = 5 * (c - 3 + d);
	int kq4 = a * (b + c /d) - 22;
	
	printf("kq1  : %d\n" ,kq1);
	printf("kq2  : %d\n" ,kq2);
	printf("kq3  : %d\n" ,kq3);
	printf("kq4  : %d\n" ,kq4);
	
	return 0;
	
	

}
