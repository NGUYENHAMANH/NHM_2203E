#include<stdio.h>
// tim chu so dau tien cua so nguyen duong n
int main(){
	int n;
	int a;
	do{
		printf(" nhap so nguyen duong n: ");
		scanf("%d",&n);
	}
	while(n<=0);
	
	a=n;
	while(n>=10){
		
		n=n/10;
	}
	printf("chu so dau tien cua %d la:%d\n",a,n);

	
}
