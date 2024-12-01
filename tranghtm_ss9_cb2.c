#include <stdio.h>

int main(){
	int index, num;
	int arr[100] = {1, 4, 7, 56 ,23, 23 };
	
	printf("Phan tu ban dau: ");
	for ( int i = 0; i< 6; i++){
		printf( "\t%d", arr[i]);
	}
	
	printf("\nBan muon sua phan tu o vi tri nao(0-6): ");
	scanf("%d", &index);
	
	if ( index > 6 || index < 0){
		printf("Vi tri khong hop le!");
		return 1;
	}
	
	printf("Gia tri muon sua: ");
	scanf("%d", &num);
	
	arr[index-1] = num;
	
	printf("\nPhan tu sau update: ");
	for ( int i = 0; i<6 ; i++){
		printf("\t%d", arr[i]);
	}
	
	return 0;
}




