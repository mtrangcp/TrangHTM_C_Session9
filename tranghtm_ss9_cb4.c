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

int main(){
	int check = true, n, num, index, choice, size = 0;
	int arr[100] ;
	
	for ( int i = 0; i<100; i++){
		arr[i] = 0;
	}
	
	do {
		printf("\n\n-------------------------------------");
		printf("\n	MENU");
		printf("\n1. Nhap vao mang");
		printf("\n2. Hien thi mang");
		printf("\n3. Them phan tu");
		printf("\n4. Sua phan tu");
		printf("\n5. Xoa phan tu");
		printf("\n6. Thoat");
		printf("\n\n Lua chon cua ban: ");
		scanf("%d", &choice);
		
		switch ( choice ){
			case 1:{
				printf("nhap so phan tu muon them(1-90): ");
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
					printf("\nPhan tu trong mang: ");
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
					printf("\nnhap vi tri muon them (1-%d): ",n );
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
			case 4:{
				if ( checkNull(arr, 100) == 0 ){
					printf("\n Mang rong. Vui long chon cn1 truoc khi dung cn khac!");
				}else{
					printf("\nBan muon sua phan tu o vi tri nao(0-%d): ", n);
					scanf("%d", &index);
					
					if ( index > n || index < 0){
						printf("Vi tri khong hop le!");
					}
					
					printf("Gia tri muon sua: ");
					scanf("%d", &num);
					
					arr[index-1] = num;
					
					printf("\nPhan tu sau update: ");
					for ( int i = 0; i< n  ; i++){
						printf("\t%d", arr[i]);
					}
				}
			
				break;
			}
			case 5:{
				if ( checkNull(arr, 100) == 0 ){
					printf("\n Mang rong. Vui long chon cn1 truoc khi dung cn khac!");
				}else{
					printf("\nnhap vi tri phan tu muon xoa(1-%d): ", n );
					scanf("%d", &index);
					
					if ( index > n){
						printf("k hop le, chi nhap so tu 1-%d!", n);
					}
					
					for ( int i = index-1; i< n; i++){
						arr[i] = arr[i+1];
					}
					n -= 1;
					
					printf("\nkq: ");
					for ( int i = 0; i< n; i++){
						printf("\t%d", arr[i]);
					}
				}
						
				break;
				
			}
			case 6:{
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
