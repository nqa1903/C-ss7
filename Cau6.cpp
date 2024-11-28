#include<stdio.h>

int main(){
	int arr[5];
	printf("Nhap vao 5 so nguyen \n");
	for(int i = 0 ; i < 5 ; i++){
		printf("Nhap vao phan tu thu %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i = 0 ; i < 5 ; i++){
		if(arr[i] % 2 == 0){
			arr[i] += 2;
		}else{
			arr[i] += 3;
		}
		printf("%d \t" , arr[i]);
	}
	return 0;
}
