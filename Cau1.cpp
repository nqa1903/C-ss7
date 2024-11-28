#include<stdio.h>

int main(){
	char arr[5] = {'a' , 'b' , 'c' , 'd' , 'e'};
	for(int i = 0 ; i < sizeof(arr)/sizeof(char) ; i++){
		printf("%c " , i);
	}
	return 0;
}
