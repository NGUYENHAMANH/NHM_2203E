#include <stdio.h>
void nhapMang (int ary[],int n){
	for(int i=0;i<n;i++){
		printf("Nhap mang:");
		scanf("%d",&ary[i]);
	}
}
void	inNguoc(int ary[],int n){
	printf("\n mang in nguoc la: ");
	for(int i=n-1;i>=0;i--){
		printf("%5d",ary[i]);
	}
}
