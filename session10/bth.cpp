// Dem so lan xuat hien cua 1 so


int main(){
	int arr[10] = {1,2,3,4,5,6,7,2,3,4};
	int i, N = 3, count = 0;
	
	// dem so lan xuat cua N
	for(i = 0; i < 10; i++){
		if(arr[i]==N){
			count++;
		}
	}
	
	// biet duoc so lan
	int max = arr[0];
	for(i = 1; i< 10; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	
	
}
