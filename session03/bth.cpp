#include <stdio.h>
#include <math.h>

int main(){
//	printf("S = %.2f", sqrt(3*3 +4*4)/(3+4) + (sqrt(3)+sqrt(4))/(3*4));
	int a,b;
	double S;
	printf("Nhap gia tri cua a = ");
	scanf("%d", &a);
	printf("Nhap gia tri cua b = ");
	scanf("%d", &b);
	
	// tinh S;
	S = (sqrt(a*a+b*b))/(a+b) + (sqrt(a)+sqrt(b))/(a*b);
	// in ket qua
	printf("S = %.2lf", S);
	
	return 0;
}
