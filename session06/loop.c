// FORR

#include <stdio.h>

int main(){
	// in ra 100 so tu nhien dau tien
	int i = 1;
//	for( ; ; ){
//		if(i>=100){
//			break;
//		}
//		printf("%d\n",i);
//		i++;
//	}
	
	for(i=0; i<10 ; i++){
		if(i==3){
			break;
		}
		printf("%d\n",i);
	}
	
	printf("hello\n");
	
	
	// WHILE và DO WHILE
	// in ra 50 so chan dau tien
	int loop = 0;
	int N = 0;
//	while(loop<50){
//		if(N%2==0){
//			printf("%d\n",N);
//			loop++;
//		}
//		N++;	
//	}
//	
	
	do{
		if(N%2 ==0){
			printf("%d\n",N);
			loop++;
		}
		N++;
	}while(loop < 50);
	
	
	// Bài toán menu 
	while(1){
		printf("--------MENU---------\n");
		printf("1. Kiem tra so nguyen to\n");
		printf("2. Kiem so hoan hao\n");
		printf("3. Giai phuong tinh bac 2\n");
		printf("4. Tim gia tri lon nhat\n");
		printf("5. Tinh chu vi dien tich tam giac\n");
		printf("6. Thoat chuong trinh\n");
		int in;
		printf("Nhap lua chon : ");
		scanf("%d", &in);
		switch(in){
			case 1: 
				printf("Thuc hien chuc nang so s1 \n");
				break;
			case 6: 
				return 0;
		}
//		if(in == 6){
//			break;
//		}
	}
	
	return 0;
}
