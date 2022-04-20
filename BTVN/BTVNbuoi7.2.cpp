#include<stdio.h>
#include<string.h>
int main(){
	int n;
	printf("nhap vao n= ");
	scanf("%d",&n);
	
	char arrs[n][50];
	for(int i=0;i<n;i++){
		printf("nhap vao chuoi: ");
		scanf("%s",arrs[i]);
	}
	char x[50];
	printf(" nhap vao chuoi x: ");
	scanf("%s",x);
	bool KT=true;
	for(int i=0;i<n;i++){
		if(strcmp(arrs[i],x)==0){
			KT=false;
			printf("chuoi %s co trong danh sach",x);
			break;
		}	
	}
	if(KT){
		printf("chuoi %s khong co trong danh sach", x);
	}
}
