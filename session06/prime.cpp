// Kiem tra 1 so nhap vao co phai so nguy to hay ko
// In ra 20 so nguyên to dau tien 
// so nguyen to là so co 2 uoc 1 va chinh no
// kiem tra tu 2 -> can bac 2 n xem có uoc nao hay ko 
#include <stdio.h>
#include <math.h>
int main(){
	int n = 2, dem = 0;
	int i;
	while(dem < 20){
		int flag = 1; // la snt
		for(i = 2; i<= sqrt(n);i++){
			if(n%i == 0){
				// i la uoc cua n
				flag = 0;
				break; // dung vong lap ko can thiet
			}
		}
		if(flag){
			printf("%d\n", n);
			dem++;
		}
		n++;
	}
}
