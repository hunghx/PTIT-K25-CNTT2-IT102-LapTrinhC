
#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){
	char ch = 'a'; // 97
	printf("%c\n", ch);
	// comment : ch� th�ch
	// snake_case , camelCase , (_,$ l� cho ph�p bat dau bien)
	int numberA , chuVi, chu_vi; // khai b�o bien/ khoi tao gia tri/ g�n 
	// char < int < float < double
	int x = 5; 
	x += 5;  // <=>  x = x+5
//	x = 1.2;
//	const float PI = 3.14;
	printf("%f\n", PI);
	
//	printf("%s\n", x < 5?"Truot":"Dau");
	
	printf("%d\n", ++x); // in ra bao nhieu
	printf("x = %d\n", x);
	
	// N�ng cao : tim hieu ve cac phep toan :
	// luy thua, tri tuyet doi, khai can trong C
	// Ham printf 
	printf("hello world \n");
	// ky tu dinh dang / dai dien : %d,%f,%c,%s , \t,\n hoac %n
	printf("Hello %-50s , age %d, dtb %f %n","Nguyen Van A", 20, 7.5);
	
	int a = 5,b = 4,c = 3;
	double S = (pow(a,2) + sqrt(pow(b,2) + 4*a*c))/(2*a) - (pow(b,3)/(c*c)) 
				+ sqrt(fabs(a-b));
	printf("%f\n", S);

}




