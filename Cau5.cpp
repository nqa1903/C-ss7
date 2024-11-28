#include<stdio.h>

int main(){
	int arr[5];
	printf("Nhap vao 5 so nguyen \n");
	for(int i = 0 ; i < 5 ; i++){
		printf("Nhap vao phan tu thu %d : " , i+1);
		scanf("%d",&arr[i]);
	}
	int min = arr[0];
	int max = arr[0];
	for(int i = 0 ; i < 5 ; i++){
		if(arr[i] < min){
			min = arr[i];
		}
		if(arr[i] > max){
			max = arr[i];
		}
	}
	printf("So lon nhat la : %d \n",max);
	printf("So be nhat la : %d \n",min);
	return 0;
}
