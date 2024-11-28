#include<stdio.h>

int main(){
	int row , col;
	printf("Nhap so hang mang 2 chieu : ");
	scanf("%d" , &row);
	printf("Nhap so cot mang 2 chieu : ");
	scanf("%d", &col);
	int arr[row][col];
	for(int i = 0 ; i < row ; i++){
		for(int j = 0 ; j < col ; j++){
			printf("Nhap phan tu [%d][%d] : ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Mang 2 chieu moi nhap \n");
	for(int i = 0 ; i < row ; i++){
		for(int j = 0 ; j < col ; j++){
			printf("%d \t", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
