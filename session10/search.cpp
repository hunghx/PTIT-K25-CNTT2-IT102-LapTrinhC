// thuat toan tim kiem
#include <stdio.h>
#include <stdlib.h>
#define n 100
int main(){
	int arr[n], i, j;
	for(i=0; i< n; i++){
		arr[i] = rand()%75;
	}
	
	for(i = 0; i< n-1 ; i++){
		for(j = 0; j< n-1-i; j++){
			if(arr[j] > arr[j+1]){
				// swap - hoan doi
				int t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}	
	}
	
	for(i = 0; i< n; i++)
		printf("%d, ", arr[i]);
	printf("\n-------------------------------------\n");
	
//  tim ra vi tri cua so có gia tri 50 trong mang
//	printf("Vi tri cua gia tri 50 trong mang : \n");
//	for(i = 0; i< n; i++){
//		if(arr[i] == 50){
//			printf("%d , ", i);
//		}
//	}

    int start = 0, end = n-1;
	while(start<=end){
		int mid = (start+end)/2;
		printf("Mid = %d\n", mid);
		
		if(50 == arr[mid]){
			// da tim thay
			printf("%d tim thay gia tri 50\n", mid);
			return 0;
		} else if(50 > arr[mid]){
			// tim ben tay phai
			start = mid +1;
		}else{
			// tim ben tay trai
			end = mid -1;
		}	
	}
	
	printf("ko tim thay vi tri nao");
	
		
	printf("\n-------------------------------------\n");


	
}
