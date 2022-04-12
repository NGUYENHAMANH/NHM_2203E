#include<stdio.h>
//tim chu so lon nhat cua n
int main(){
	int n,i,p;
	int max=0;
	do{
		printf("nhap vao so nguyen duong n: ");
		scanf("%d",&n);
	}
	while(n<=0);
	p=n;
	for(;n>0;){
		i=n%10;
		if(i>max){
			max=i;
		}
		n=n/10;
	}
	printf("chu so lon nhat trong %d la: %d\n",p,max);
}
