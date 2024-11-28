#include<stdio.h>

int main(){
	int arr[5];
	int hasEven = 0;
	printf("Nhap vao 5 so nguyen \n");
	for(int i = 0 ; i < 5 ; i++){
		printf("Nhap vao phan tu thu %d : " , i+1);
		scanf("%d",&arr[i]);
	}
	for(int i = 0 ; i < 5 ; i++){
		if(arr[i] % 2 == 0){
			printf("%d \t" , arr[i]);
			hasEven = 1;
		}
	}
	if(!hasEven){
		printf("Khong co so chan trong mang");
	}
	return 0;
}
