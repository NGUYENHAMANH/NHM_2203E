#include <stdio.h>
#include "BaiKiemTra2.h"
int main(){
	int x;
	printf("Nhap x:");
	scanf("%d",&x);
	int arr[x];
	nhapMang (arr,x);
	inNguoc (arr,x);	
}
