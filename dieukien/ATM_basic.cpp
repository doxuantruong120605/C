#include<stdio.h>
#include<stdlib.h>

int main () {
	
	printf("Welcome \n");
	printf("Hay Chon Chuc Nang \n");
	printf("1 . rut tien  \n");
	printf("2 . kiem tra so du \n");
	printf("3 . chuyen khoan \n");
	printf(" 4 . kiem tra lich su giao dich \n");
	printf(" hay chon lai lenh \n");
	
	
	int choose = 0 ;
	scanf("%d", &choose);
	if (choose >= 1 && choose <= 4) {
		
		switch(choose){
			case 1:
				printf("Giao dich thanh cong");
				break;
			case 2:
				printf("so du trong tk la 5tr USD");
				break;
			case 3:
				printf("Nhap so tk can chuyen");
				break;
			case 4:
				printf("Danh sach giao dich gan day");
				break;
			default:
				printf("Hay chon lai");
		}
	}
	else {
		printf("lua chon khong phu hop");
	}
	printf("\n");
	return 0;
	
}
