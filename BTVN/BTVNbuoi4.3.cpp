#include<stdio.h>
// tinh tong cac chu so cua n
int main(){
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d",&n);
	int s=0;
	int a;
	int p;
	p=n;
	for(;n!=0;){
		a=n%10;
		s=s+a;
		n=n/10;
	}
	printf("tong cac chu so cua %d la: %d\n",p,s);
	
}
