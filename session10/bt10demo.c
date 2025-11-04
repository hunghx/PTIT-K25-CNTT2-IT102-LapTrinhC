#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int main(){
	int arr[MAX], i;
	for(i=0; i< MAX; i++){
		arr[i] = rand()%200;
	}
	for(i=0; i< MAX; i++)
	printf("%d ", arr[i]);
	
	printf("\n---------------------------\n");
	
	int arrValue[MAX], arrCount[MAX], count=0;
	
	for(i=0; i< MAX ; i++){
		int j;
		for(j=0; j<count; j++){
			if(arrValue[j] == arr[i]){
				// dem roi 
				break;
			}
		}
		
		if(j<count){
			// phan tu nay da duoc dem truoc do
			arrCount[j]+=1;
		}else{
			// chua duoc dem
			arrValue[j] = arr[i];
			arrCount[j] = 1;
			count++;
		}
	}
	
//	 co duoc so lan xuat cua tung so
	for(i = 0; i<count;i++){
		printf("So %d xuat hien %d lan \n", arrValue[i], arrCount[i]);
	}
	// tim ra so lan xuat hien lon nhat
	int max = arrCount[0];
	for(i=1; i< count; i++){
		if(arrCount[i]>max){
			max = arrCount[i];
		}
	}
	printf("\nCac so có so lan xuat hien nhieu nhat là : ");
	// da có so lan lon nhat
	for(i=0; i< count; i++){
		if(max == arrCount[i]){
			printf("%d, ", arrValue[i]);
		}
	}
	
}
