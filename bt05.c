#include<stdio.h>

int main(){
	int n;
	
	do{
		printf("Vui long nhap so luong phan tu n>0: ");
		scanf("%d", &n);
	}while(n<0);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("\nGia tri cua phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	int temp =0;
	for(int i=0;i<n;i++){
		int swap = 0;
		temp++;
		for(int j=0;j<n-i-1;j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swap = 1;
				
			}
		}
		if(swap ==0){
			break;
		}
	}
	
	printf("\nMang duoc sap xep voi gia tri tang dan: \n");
	for(int i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\nSo lan lap la: %d", temp);
	
	return 0;
}
