#include <stdio.h>
int main ( ) {
	
	char ch ;
	
	printf("enter character : ");
	scanf("%c", &ch);
	
	if(ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z'  ) {
		switch (ch) {
			case 'A' :
			case 'E' :
			case 'I' :
			case 'O' :
			case 'U' :
			case 'a' :
			case 'e' :
			case 'i' :
			case 'o' :
			case 'u' :
			printf("\n character is a vowel");
			break;
				
			case 'Z':
			case 'z':
			printf("\n charater al (Z , z) was entered");
			break;
				
			default :
			printf("\n charater is a consonant");					
		}
			}
			
	else {
			printf("Number");
	
		}
			
	return 0;
	
	
}
