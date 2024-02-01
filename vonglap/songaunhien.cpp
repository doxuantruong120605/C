#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main () {
	int guess, randomNumber;
	
	srand(time(0));
	randomNumber = rand( ) % 100 + 1;
	
//	printf("randomNumber: %d \n",randomNumber );
	
	do {
		printf("Guess the number (between 1 and 100 ) : ");
		scanf("%d",&guess);
		
		if(guess > randomNumber) {
			printf("Too high \n");
		} else if (guess < randomNumber) {
			printf("Too low \n");
		} else {
			printf ("COngratulations ! ");
		}
	} while (guess != randomNumber);
	return 0;
}
