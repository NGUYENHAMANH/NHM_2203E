#include<stdio.h>
// tim tong cac uong cua n
int main(){
	int n;
	int s=0;
	do{
		printf("nhap so nguyen n lon hon 0: ");
		scanf("%d",&n);
	}
	while(n<=0);
	for(int i=1;i<=n;i++){
	if(n%i==0){
		printf ("cac uoc la: %d\n",i);
		s=s+i;
	}	
	}
	printf("tong cac uoc cua %d la: %d\n",n, s);
}
