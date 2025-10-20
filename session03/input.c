#include <stdio.h>
#include <stdlib.h>
int main(){
	int a;
	printf("Nhap vao 1 so nguyen \n");
	scanf("%d", &a);
	printf("a =%d", a);
//	// chua hoc chuoi : kieu du lieu chuoi , gets, fgets
//	printf("Nhap diem trung binh : \n");
//	float avg;
//	scanf("%f", &avg);
//	printf("DTB = %f", avg);
//	
	// Nhap ki tu
//	getchar();
//	fflush(stdin);
	char ch ;
	printf("Nhap vao ky tu bat ki : ");
	ch = getchar();
	putchar(ch);
	return 0;
}
