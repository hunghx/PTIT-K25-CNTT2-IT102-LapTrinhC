// thuat toan sap xep
#include <stdio.h>
#include <stdlib.h>
#define n 10
int main(){
	int arr[n], i, j;
	for(i=0; i< n; i++){
		arr[i] = rand()%100;
	}
	printf("Mang truoc khi duoc sap xep : \n");
	for(i = 0; i< n; i++)
		printf("%d, ", arr[i]);
		
	printf("\n-------------------------------------\n");
	
	// Bubble Sort
//	for(i = 0; i< n-1 ; i++){
//		for(j = 0; j< n-1-i; j++){
//			if(arr[j] < arr[j+1]){
//				// swap - hoan doi
//				int t = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = t;
//			}
//		}	
//	}

	// Selection Sort
//	for(i=0; i< n-1; i++){
//		int minVal = arr[i];
//		int minIndex = i;
//		for(j = i+1; j < n; j++){
//			if(arr[j]<minVal){
//				minVal = arr[j];
//				minIndex = j;
//			}
//		}
//		if(minIndex != i){
//			arr[minIndex] = arr[i];
//			arr[i] = minVal;
//		}
//	}
	
	
	// Insertion sort
	
    for(i=1; i< n; i++){
    	int key = arr[i];
    	for(j = i-1; j>=0 && arr[j]>key; j--){
    		arr[j+1] = arr[j];
		}
		arr[j+1] = key;
	}
	
	
	printf("Mang sau khi duoc sap xep : \n");
	for(i = 0; i< n; i++)
		printf("%d, ", arr[i]);
	
}
