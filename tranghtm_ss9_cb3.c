#include <stdio.h>

int main(){
	int index, num, n;
	int arr[100] ;
	
	printf("nhap so phan tu muon them(1-99): ");
	scanf("%d", &n);
	
	if ( n > 99){
		printf("k hop le, chi nhap so tu 1-99!");
		return 1;
	}
	
	for ( int i = 0; i< n; i++){
		printf("nhap so phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("\nkq ban dau: ");
	for ( int i = 0; i< n; i++){
		printf("\t%d", arr[i]);
	}
	
	printf("\n\nnhap vi tri phan tu muon xoa(1-%d): ", n+1 );
	scanf("%d", &index);
	
	if ( index > n){
		printf("k hop le, chi nhap so tu 1-%d!", n+1);
		return 1;
	}
	
	for ( int i = index-1; i< n+1; i++){
		arr[i] = arr[i+1];
	}
	
	printf("\nkq: ");
	for ( int i = 0; i< n-1; i++){
		printf("\t%d", arr[i]);
	}
	
	return 0;
}
