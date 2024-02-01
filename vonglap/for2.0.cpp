#include <stdio.h>

int main () {
	int i , j ,max;
	printf("plcase enter the maximum value \n");
	printf("for which a table can be printed : ");
	scanf("%d", &max);
	
	for (i  , j = max ; i <= max ; i++ , j--) {
		printf("%d + %d = %d \n", i , j , i + j);
	}	
	return 0;
}
