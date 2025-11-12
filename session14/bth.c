#include <stdio.h>
#include <string.h>
#define MAX 100
#define BLACK_PINK "\033[38;5;13m\033[48;5;0m"
#define BLUE_SKY_PINK "\033[38;5;13m\033[48;5;6m"
#define RESET_COLOR "\033[0m"
void show_list_students(char arrStudents[MAX][30], int n);
int add_students(char arrStudents[MAX][30], int n);
int main(){
	char arr[MAX][30], n =5;
	strcpy(arr[0],"Nguyen Van A");
	strcpy(arr[1],"Mai Cong Doan");
	strcpy(arr[2],"Tang Hieu Thanh");
	strcpy(arr[3],"Tran Minh Duc");
	strcpy(arr[4],"Vu Hoang Lan Anh");
	int choice;
	while(1){
		printf("+-------------------------MENU-------------------------+\n");
		printf("|%-54s|\n","1. Hien thi danh sach sinh vien");
		printf("|%-54s|\n","2. Them moi sinh vien");
		printf("|%-54s|\n","3. Cap nhat ten sinh vien");
		printf("|%-54s|\n","4. Xoa sinh vien");
		printf("|%-54s|\n","5. Tim kiem sinh vien theo ten");
		printf("|%-54s|\n","6. Sap xep sinh vien theo(a-z)");
		printf("|%-54s|\n","7. Thoat chuong trinh");
		printf("+------------------------------------------------------+\n");
		
		printf("%sNhap vao lua chon : ", BLACK_PINK);
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				show_list_students(arr,n);
				break;
			case 2:
				{
					int count = add_students(arr,n);
					if(count == 0){
						printf("Mang da day, ko the them phan tu \n");
					}else{
						printf("Da them thanh cong %d phan tu \n", count);
						n = n+count;
					}
				}	
				break;
			case 3:
				
				break;
			case 4:
				
				break;
			case 5:
				
				break;
			case 6:
				
				break;
			case 7:
				printf("Thoat chuong trinh");
				break;
			default:
				break;
		}
		if(choice == 7){
			break;
		}
	}
}
int add_students(char arrStudents[MAX][30], int n){
	if(n == MAX){
		return 0;
	}
	int count;
	do{
		printf("Nhap so luong phan tu can them : ");
		scanf("%d", &count);
		if(count <=0 || (count+n > MAX)){
			printf("So luong phan tu can them vuot qua kich thuoc cho phép (%d)\n", MAX - n);
		}
	}while(count <=0 || (count+n > MAX));
	fflush(stdin);
	int i;
	for(i = 0; i<count; i++){
		printf("Nhap ten sinh vien thu %d: ", i+1);
		fgets(arrStudents[n+i],30,stdin);
		arrStudents[n+i][strcspn(arrStudents[n+i],"\n")] = '\0';
	}
	return count;
};
void show_list_students(char arrStudents[MAX][30], int n){
	if(n==0){
		printf("\n-----Danh sách trong-----\n");
		return;
	}
	
	printf("\n------------Bang sinh vien----------\n");
	int i;
	printf("+---+------------------------------+\n");
	printf("|%-3s|%-30s|\n", "STT", "Ho va Ten");
	printf("+---+------------------------------+\n");
	for(i=0;i<n;i++){
		printf("|%-3d|%-30s|\n",i+1, arrStudents[i]);
	}
	printf("+---+------------------------------+\n");
	printf("%s\n", RESET_COLOR);
};
