#include<stdio.h>

int main(){
	int n;
	int arr[n];
	printf("Nhap vao do dau cua mang : ");
	scanf("%d" , &n);
	for(int i = 0 ; i < n ; i++){
		printf("Nhap vao phan tu thu %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i = 0 ; i < n ; i++){
		printf("%d \t",arr[i]);
	}
}
