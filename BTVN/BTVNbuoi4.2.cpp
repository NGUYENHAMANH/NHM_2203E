#include<stdio.h>
// tim UCLN,BCNN
int main(){
	int a,b,m,n,S ;
	printf("nhap vao a= ");
	scanf("%d",&a);
	printf("nhap vao b= ");
	scanf("%d",&b);
	
	m=a;
	n=b;
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
		}
		
	}
	printf("UCLN la: %d\n",a);
	S=(m*n)/a;
	printf("BCNN la: %d\n",S);
	}
	

