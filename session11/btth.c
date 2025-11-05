#include <stdio.h>
#define MAX 100

int main(){
	int choice, size = 7, arr[MAX] = {1,-2,5,3,0,-3,4}, i, j, pos, value; // khai bao cac bien can thiet
	while(1){
		// in menu
		printf("+----------MENU------------+\n");
		printf("|1. Nhap mang              |\n");
		printf("|2. Duyet và in mang       |\n");
		printf("|3. Chen phan tu vào mang  |\n");
		printf("|4. Xoa phân tu mang	   |\n");
		printf("|5. Cap nhat gia tri       |\n");
		printf("|6. Tim kiem theo dieu kien|\n");
		printf("|7. Sap xep theo yeu cau   |\n");
		printf("+--------------------------+\n");
		// re nhanh menu   
		printf("Hay chon chuc nang : ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				// nhap so luong phan tu mang
				while(1){
					printf("Nhap so luong phan tu cho mang : ");
					scanf("%d", &size);
					// kiem tra dieu kien ve kich thuoc
					if(size >0 && size <=MAX){
						// nhap dung 
						break;
					}
					printf("So luong khong hop le [1-%d] phan tu \n", MAX);
					printf("Vui long nhap lai !!!\n");
				}
				// nhap lan luot tung phan tu
				for(i=0; i<size; i++){
					printf("Nhap arr[%d] = ", i);
					scanf("%d", &arr[i]);
				}
				// Thong bao thanh cong
				printf("Ban vua nhap thanh cong %d phan tu!!!\n", size);
				break;
			case 2:
				if(size == 0){
					printf("Mang chua co phan tu nào, vui long chon chuc nang 1 truoc!!\n");
					break;
				}
				printf("Cac phan tu co trong mang la : \n");
				for(i=0;i<size; i++){
					printf("%d ", arr[i]);
				}
				printf("\n");
				break;
			case 3:
				if(size == MAX){
					printf("Mang da day !!!\n");
					break;
				}
				while(1){
					printf("Nhap vi tri can chen : ");
					scanf("%d", &pos);
					if(pos>=0 && pos <=size){
						break;
					}
					printf("Vi tri ko hop le [0 - %d]\n", size);
				}
				// nhap gia tri can chen
				printf("Nhap gia tri can chen : ");
				scanf("%d", &value);
				// chen
				for(i = size ; i> pos ; i--){
					arr[i] = arr[i-1];
				}
				arr[pos] = value;
				size++;
				printf("Chen thanh cong phan tu %d vao vi tri %d\n", value, pos);
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				for(i=0; i< size -1; i++){
					for(j=0; j<size-i-1; j++){
						if(arr[j]>arr[j+1]){
							int t = arr[j];
							arr[j] = arr[j+1];
							arr[j+1] = t;
						}
					}
				}
				printf("Mang da duoc sap xep !!\n");
				break;
			case 0:
				printf("Thoat chuong trình !!!");
				break;
			default:
				printf("Lua chon ko hop le (1 - 7)!!\n");
				break;	
		}
		if(choice == 0){
			break;
		}
	}
}
