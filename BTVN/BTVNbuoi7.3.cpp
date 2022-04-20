#include<stdio.h>
#include<string.h>
int main(){
	char arrs[50];
	printf("nhap vao chuoi: ");
	scanf("%s",arrs);
	int c=0;
	for(int i=0;i<strlen(arrs);i++){
		if(arrs[i]==97||arrs[i]==101||arrs[i]==105||arrs[i]==111||arrs[i]==117){
			c++;
		}
	}
	printf("so lan xuat hien cua cac nguyen am la %d",c);
}
