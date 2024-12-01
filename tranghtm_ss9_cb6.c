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
	int check = true, choice, row, col;
	int arr[50][50] ;
	
	for ( int i = 0; i < 50; i++){
		for ( int j =0; j < 50; j++){
			arr[i][j] = 0;
		}
	}
	
	do {
		printf("\n\n-------------------------------------");
		printf("\n	MENU");
		printf("\n1. Nhap kich co va gia tri cac phan tu");
		printf("\n2. In gia tri mang theo ma tran");
		printf("\n3. In cac phan tu le va tinh tong");
		printf("\n4. In phan tu nam tren bien va tinh tich");
		printf("\n5. In phan tu tren duong cheo chinh");
		printf("\n6. In phan tu tren duong cheo phu");
		printf("\n7. In ra dong co tong lon nhat");
		printf("\n8. Thoat");
		printf("\n\n Lua chon cua ban: ");
		scanf("%d", &choice);
		
		switch ( choice ){
			case 1:{
				printf("nhap so hang: ");
				scanf("%d", &row);
				printf("nhap so cot: ");
				scanf("%d", &col);
				
				if ( row > 50 || col > 50){
					printf("K hop le, chi nhap so tu 1-50!");
					break;
				}
				
				for ( int i = 0; i< row; i++){
					for ( int j =0; j< col; j++){
						printf("nhap so phan tu thu %d hang %d: ",  j+1, i+1);
						scanf("%d", &arr[i][j]);
					}
					printf("\n");
				}
				
				break;
			}
			case 2:{
				if ( checkNull(arr, 100) == 0 ){
					printf("\n Mang rong. Vui long chon cn1 truoc khi dung cn khac!");
				}else{
					printf("\nPhan tu theo ma tran: \n");
					for ( int i = 0; i< row; i++){
						for ( int j =0; j< col; j++){
							printf("\t%d", arr[i][j]);
						}
						printf("\n");
					}
				}
				
				break;
			}
			case 3:{
				if ( checkNull(arr, 100) == 0 ){
					printf("\n Mang rong. Vui long chon cn1 truoc khi dung cn khac!");
				}else{
					printf("\nCac phan tu le: \n" );
					int sum = 0;
				
					for ( int i =0; i< row; i++){
						for ( int j = 0; j< col; j++){
							if ( arr[i][j] % 2 != 0){
								printf("\t%d", arr[i][j]);
								sum += arr[i][j];
							}else{
								printf("\t");
							}
						}
						printf("\n");
					}
					printf("\nTong cac phan tu le: %d", sum);
				}
				
				break;
			}
			case 4:{
				if ( checkNull(arr, 100) == 0 ){
					printf("\n Mang rong. Vui long chon cn1 truoc khi dung cn khac!");
				}else{
					printf("\nCac phan tu nam tren bien: \n" );
					int multi = 1;
				
					for ( int i =0; i< row; i++){
						for ( int j = 0; j< col; j++){
							if ( j > 0 && i > 0 && j < col-1 && i < row-1 ){
								printf("\t");
								
							}else{
								printf("\t%d", arr[i][j]);
								multi *= arr[i][j];
							}
						}
						printf("\n");
					}
					printf("\n Tich cac phan tu tren bien: %d", multi);
				}
			
				break;
			}
			case 5:{
				if ( checkNull(arr, 100) == 0 ){
					printf("\n Mang rong. Vui long chon cn1 truoc khi dung cn khac!");
				}else{
					if ( row == col ){
						printf("\nCac phan tu nam tren dg cheo chinh: \n" );
						for ( int i = 0 ; i < row ; i++){
							for ( int j = 0 ; j < col ; j++){
								if ( j == i ){
									printf ( "\t%d", arr[i][j] );
								}else{
									printf("\t");
								}
							}
							printf("\n");
						}
					}else{
						printf("\nChi mang vuong moi co dg cheo chinh" );
					}
				}
						
				break;
			}
			case 6:{
				if ( checkNull(arr, 100) == 0 ){
					printf("\n Mang rong. Vui long chon cn1 truoc khi dung cn khac!");
				}else{
					if ( row == col ){
						printf("\nCac phan tu nam tren dg cheo phu: \n" );
						for ( int i = 0 ; i < row ; i++){
							for ( int j = 0 ; j < col ; j++){
								if ( j+i == 3 ){
									printf ( "\t%d", arr[i][j] );
								}else{
									printf("\t");
								}
							}
							printf("\n");
						}
					}else{
						printf("\nChi mang vuong moi co dg cheo phu" );
					}
				}
				break;
			}
			case 7:{
				if ( checkNull(arr, 100) == 0 ){
					printf("\n Mang rong. Vui long chon cn1 truoc khi dung cn khac!");
					
				}else{
					int sumMax =0, sumRow =0, rowMax;
					for ( int i =0; i< row; i++){
						for ( int j =0; j< col; j++){
							sumRow += arr[i][j];
						}
						if ( sumRow > sumMax ){
							sumMax = sumRow;
							rowMax = i+1;
						}
						sumRow =0;
					}	
					printf("\n Hang %d co tong cac phan tu lon nhat: ", rowMax);
					for ( int i = 0; i< col; i++){
						printf("\t%d", arr[rowMax-1][i]);
					}				
					printf("\n Tong: %d", sumMax);
				}
				
				break;
			}
			case 8:{
				printf("\nBan chon thoat ");
				check = false;
				break;
			}
			default:{
				printf("Vui long chon dung( 1- 8 )!");
			}
		}
	}while(check);
	
	return 0;
}
