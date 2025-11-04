#include <stdio.h>

int main(){
	int  tienDien = 0, soDien = 70, n ;
	printf("Chon loai ho tieu dung : \n1.Ho gia dinh \n2.Ho kinh doanh \n3.Ho san xuat\n");
	scanf("%d", &n);
	float phuPhi = (n==1)? 0.05:( n==2 ? 0.1 :(n == 3? 0.08 : 0 ));
	
	
	if(soDien<0){
		printf("nhap ko hop le");
		return 0;
	}else if(soDien <=50){
		tienDien = 1500*soDien;
	}else if(soDien <=100){
		tienDien = 50*1500 + (soDien-50)*2000;
	}else if(soDien <=200){
		tienDien = 50*1500 + 50*2000+ (soDien-100)*2500;
	}else {
		tienDien = 50*1500 + 50*2000+100*2500+(soDien-200)*3000;
	}
	tienDien = tienDien*(1+phuPhi);
	printf("Nguoi tieu thu %d kwh het %d vnd", soDien, tienDien);
	
	return 0;
}
