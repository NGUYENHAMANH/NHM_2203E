#include<stdio.h>
int main(){
	// input a
	int a;
	scanf("%d",&a);
	// input b
	int b;
	scanf("%d",&b);
	// input c
	int c;
	scanf("%d",&c);
	// so sanh a,b,c
	if(a>b){
			if(c>a){
				// c lon nhat
				printf("c la so lon nhat");
			}else{
				// a lon nhat
				printf("a la so lon nhat");
			}
		
	}else{
			if(c>b){
				// c lon nhat
				printf("c la so lon nhat");
			}else{
				// b lon nhat
				printf("b la so lon nhat");
			}
	}
}
