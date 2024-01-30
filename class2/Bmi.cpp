#include<stdio.h>

int main () {
	float weight, height;
	
	printf("Nhap Can Nang (KG): ");
	scanf("%f", &weight);
	
	printf("Nhap Chieu Cao (m): ");
	scanf("%f", &height);
	
	float bmi = weight / (height * height);
	
	printf("chi so bmi cua ban : %.2f \n ",bmi);
	
	if (bmi < 18.5 ) {
		printf("Ban dg gay .\n");
	} else if (bmi < 24.9) {
		printf("vua du");
	} else if (bmi < 29.9) {
		printf("thua can");
	} else {
		printf("beo phi r");
	}
	return 0;
}
