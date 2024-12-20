#include<stdio.h>

int main(){
	int n;
	int m;
	
	do{
		printf("Vui long nhap so luong phan tu n>0: ");
		scanf("%d", &n);
	}while(n<0);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("\nGia tri cua phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	
	for(int i=0;i<n;i++){
		int min_index = i;
		for(int j=i+1;j<n;j++){
			if(arr[min_index] > arr[j]){
				min_index = j;
			}
		}
		int temp = arr[min_index];
		arr[min_index] = arr[i];
		arr[i] = temp;
	}
	
	printf("\nMang duoc sap xep voi gia tri tang dan: \n");
	for(int i=0; i<n; i++){
		printf("%d", arr[i]);
	}
	
	printf("\nNhap gia tri can tim kiem: ");
	scanf("%d", &m);
	
	int index = 0;
	for(int i=0; i<n; i++){
		if(arr[i] == m){
			index = i+1;
		}
	}
	
	printf("Gia tri %d o vi tri thu %d", m,index);
	
	
	return 0;
}
