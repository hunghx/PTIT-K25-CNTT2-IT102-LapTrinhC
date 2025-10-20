// các chuan cua C : C20
#include "stdio.h"

int main (){
	// Cach 1 : truyen vao 1 chuoi, xau ki tu
	printf("Hello\n");
	// Cách 2 : truyen vao ki tu dai dien
	printf("Ten : %-20s, Tuoi : %d , DTB : %.1f, Xep loai : %c \n","Nguyen Van A     ",20, 6.8, 'C');
	printf("Ten : %-20s, Tuoi : %d , DTB : %.1f, Xep loai : %c \n","Nguyen Va   ",20, 6.8, 'C');
	printf("Ten : %20s, Tuoi : %d , DTB : %.1f, Xep loai : %c \n","Nguyen Van A",20, 6.8, 'C');
	printf("Ten : %20s, Tuoi : %d , DTB : %.1f, Xep loai : %c \n","Nguyen Van A",20, 6.8, 'C');
	putchar('a');
	return 0;
} 
