// ctrl+N de tao file moi 
#include <stdio.h> 
#define PI 3.14

int main(){
	// bat dau chuong trinh
	// khai bao bien
	int number; // number = 0 hoc giá tri rac
	number = 10;
	number = 100;
	// khai bao hang
	// const float PI = 3.14;
	
//	a += b; // <=> a = a+b
	
	printf("%d\n", number);
	printf("%f\n", PI);
	
	// Tang giam gia tri 
	//++number; // tang number lên 1
	printf("%d\n", ++number);
	
	// toan tu 3 ngoi
	// neu a >100 , thi in ra a lon hon 100,
	// neu ko thi in ra a < 100
	int a =101;
	printf("%s\n", (a>100?"A lon hon 100":"A nho hon 100"));
	//	char < int < float < double (long short long long)
	
	float high = 10000000.0937882;
	int low = high; // co the bi tran o nho
	printf("%d\n", low);
	high = low; // ép kieu ngam, ko sinh ra loi
	printf("%f\n", high); 
	// ky tu dinh dang : %d, %f, %c, %s, \t, \n|%n
	printf("hello\n");
	
	printf("+--------+--------------------+----+----------+\n");
	printf("|%-8s|%-20s|%4s|%10s|\n","STT","Ho & Ten","Tuoi","SDT");
	printf("+--------+--------------------+----+----------+\n");
	printf("|%-8s|%-20s|%4s|%10s|\n","20251001","Mai Cong Doan","18","093673242");
	printf("+--------+--------------------+----+----------+\n");
	return 0;
}
