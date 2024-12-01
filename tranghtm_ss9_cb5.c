#include <stdio.h>
#include <stdbool.h>

int checkNull( int arr[], int n){
	for ( int i =0; i< n; i++){
		if ( arr[i] != 0 ){
			return 1;
		}
	}
	return 0;
}

int checkNguyenTo( int n){
	if ( n < 2){
		return 1;
	}
	for ( int i =2; i< n; i++){
		if ( n % i == 0 ){
			return 1;
		}
	}
	return 0;
}

int main(){
	int check = true, n, num, index, choice;
	int arr[100] ;
	
	for ( int i = 0; i<100; i++){
		arr[i] = 0;
	}
	
	do {
		printf("\n\n-------------------------------------");
		printf("\n	MENU");
		printf("\n1. Nhap so phan tu can nhap va gia tri cac phan tu");
		printf("\n2. In ra gia tri cac phan tu dang xu ly");
		printf("\n3. In ra gia tri cac phan tu chan va tinh tong");
		printf("\n4. In ra min va max");
		printf("\n5. In ra phan tu la so nguyen to va tinh tong");
		printf("\n6. Nhap 1 so, thong ke so lan xuat hien trong mang");
		printf("\n7. Them 1 phan tu vao vi tri chi dinh");
		printf("\n8. Thoat");
		printf("\n\n Lua chon cua ban: ");
		scanf("%d", &choice);
		
		switch ( choice ){
			case 1:{
				printf("nhap so luong phan tu(1-90): ");
				scanf("%d", &n);
				
				if ( n > 90){
					printf("k hop le, chi nhap so tu 1-90!");
					break;
				}
				
				for ( int i = 0; i< n; i++){
					printf("nhap so phan tu thu %d: ", i+1);
					scanf("%d", &arr[i]);
				}
				
				break;
			}
			case 2:{
				if ( checkNull(arr, 100) == 0 ){
					printf("\n Mang rong. Vui long chon cn1 truoc khi dung cn khac!");
				}else{
					printf("\nPhan tu dang xu ly: ");
					for ( int i = 0; i< n; i++){
						printf("\t%d", arr[i]);
					}
				}
				
				break;
			}
			case 3:{
				if ( checkNull(arr, 100) == 0 ){
					printf("\n Mang rong. Vui long chon cn1 truoc khi dung cn khac!");
				}else{
					printf("\nCac phan tu chan: " );
					int sum = 0;
				
					for ( int i =0; i< n; i++){
						if ( arr[i] % 2 == 0){
							printf("\t%d", arr[i]);
							sum += arr[i];
						}
					}
					printf("\nTong cac phan tu chan: %d", sum);
				}
				
				break;
			}
			case 4:{
				if ( checkNull(arr, 100) == 0 ){
					printf("\n Mang rong. Vui long chon cn1 truoc khi dung cn khac!");
				}else{
					int min = arr[0], max = arr[0];
				
					for ( int i =0; i< n; i++){
						if ( arr[i] < min){
							min = arr[i];
						}
						if ( arr[i] > max){
							max = arr[i];
						}
					}
					printf("\nMin: %d  -  Max: %d", min, max);
				}
			
				break;
			}
			case 5:{
				if ( checkNull(arr, 100) == 0 ){
					printf("\n Mang rong. Vui long chon cn1 truoc khi dung cn khac!");
				}else{
					printf("\nCac phan tu la so nguyen to: " );
					int sum = 0;
				
					for ( int i =0; i< n; i++){
						if ( checkNguyenTo(arr[i]) == 0){
							printf("\t%d", arr[i]);
							sum += arr[i];
						}
					}
					printf("\nTong cac phan tu nguyen to: %d", sum);
				}
						
				break;
			}
			case 6:{
				if ( checkNull(arr, 100) == 0 ){
					printf("\n Mang rong. Vui long chon cn1 truoc khi dung cn khac!");
				}else{
					int count = 0;
					printf("nhap gia tri muon tim: ");
					scanf("%d", &num);
					
					for ( int i = 0; i< n; i++){
						if ( num == arr[i] ){
							count++;
						}
					}
					printf("\nSo %d xuat hien %d lan!", num, count);
				}
				break;
			}
			case 7:{
				if ( checkNull(arr, 100) == 0 ){
					printf("\n Mang rong. Vui long chon cn1 truoc khi dung cn khac!");
				}else{
					printf("\nnhap vi tri muon them (1-%d): ",n+1 );
					scanf("%d", &index);
					printf("nhap gia tri muon them: ");
					scanf("%d", &num);
					if ( index > (n+1) || index < 0){
						printf("Vi tri khong hop le!");
					}
					n +=1;
					for ( int i = n ; i> index-1; i--){
						arr[i] = arr[i-1];
					}
					arr[index-1] = num;
					
					printf("\nkq: ");
					for ( int i = 0; i< n; i++){
						printf("\t%d", arr[i]);
					}
				}
				
				break;
			}
			case 8:{
				printf("\nBan chon thoat ");
				check = false;
				break;
			}
			default:{
				printf("Vui long chon dung( 1- 6 )!");
			}
		}
	}while(check);
	
	return 0;
}
