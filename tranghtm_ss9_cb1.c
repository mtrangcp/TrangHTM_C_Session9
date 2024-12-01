#include <stdio.h>

int main(){
	int index, num, n;
	int arr[100] ;
	
	printf("nhap so phan tu muon them: ");
	scanf("%d", &n);
	
	for ( int i = 0; i< n; i++){
		printf("nhap so phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("\nnhap vi tri muon chen: ");
	scanf("%d", &index);
	printf("nhap gia tri muon chen: ");
	scanf("%d", &num);
	
	for ( int i = n+1; i> index-1; i--){
		arr[i] = arr[i-1];
	}
	arr[index-1] = num;
	
	printf("\nkq: ");
	for ( int i = 0; i< n+1; i++){
		printf("\t%d", arr[i]);
	}
	
	
	return 0;
}
