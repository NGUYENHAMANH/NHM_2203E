#include <stdio.h>
#include <math.h>
int main(){
	int n;
	do{
		printf("input n: ");
		scanf("%d",&n);
	}while(n<=0);
	int a[n];
	for(int i=0;i<n;i++){
		printf("arr[%d]: ",i);
		scanf("%d",&a[i]);
	}
	int x;
	printf("input x: ");
	scanf("%d",&x);
	int H=abs(a[0]-x);
	int min=0;
	for(int i=0; i<n;i++){
		if (abs(a[i]-x)<H){
			H=abs(a[i]-x);
			min=a[i];
		}
	}
	printf("gia tri gan x nhat la: %d", min);
}
