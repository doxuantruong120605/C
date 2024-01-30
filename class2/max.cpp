#include <stdio.h>



int main () {
	int A , B , C;
	
	printf( "enter A : ");
	scanf("%d", &A );
	
	printf( "enter  B : ");
	scanf("%d", &B );
	
	printf( "enter C : ");
	scanf("%d", &C);
	
	
	if (A > B && A > C) {
		printf("Display Max = A ");
	} else if(B > A && B > C) {
		printf(" Display Max = B");
	} else if (C > A && C > B) {
		printf("Display Max = C");
	}
	return 0;
	
}
