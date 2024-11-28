#include<stdio.h>

int main(){
	int n;
	int arr[n];
	printf("Nhap vao do dai cua mang : ");
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i++){
		printf("Nhap vao phan tu thu %d : ",i+1);
		scanf("%d" , &arr[i]);
		while(arr[i] % 2 == 0){
			printf("Nhap lai phan tu %d la so le : ",i+1);
			scanf("%d",&arr[i]);
		}
	}
	for(int i = 0 ; i < n ; i++){
		printf("%d \t",arr[i]);
	}
	return 0;
}
