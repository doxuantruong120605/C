#include<stdio.h>

int main () {
	int a = 5;
	int b = 10;
	int c = 7;
	
	int tong = a + b;
	int hieu = a - b;
	int tich = a * b;
	int thuong = a / b;
	
	int kq1 = (a > b);
	int kq2 = (a <= b);
	int kq3 = (a == c);
	int kq4 = (a != c);
	
	int kq5 = (a < b && b > c);
	int kq6 = (a < b || b < c);
	int kq7 = !(a < b);
	
	printf("tong : %d\n", tong);
	printf("hieu : %d\n", hieu);
	printf("tich : %d\n", tich);
	printf("thuong : %d\n", thuong);
	
	printf("kq1 : %d\n", kq1);
	printf("kq2 : %d\n", kq2);
	printf("kq3 : %d\n", kq3);		
	printf("kq4 : %d\n", kq4);
	
	printf("kq5 : %d\n", kq5);
	printf("kq6 : %d\n", kq6);	
	printf("kq7 : %d\n", kq7);
	
	return 0;
	
}
