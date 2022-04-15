#include<stdio.h>
//tim x co thuoc mang n khong
int main(){
	int n;
	printf("nhap vao n= ");
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int x;
	printf("nhap vao x= ");
	scanf("%d",&x);
	bool KT=true;// gia su arr[i] ==x
	for(i=0;i<n;i++){
		if(arr[i]==x){
			KT=false;
			
			printf("%d  thuoc mang n",x);
			break;
		}
	}
	if(KT==true){
		printf("%d k thuoc mang n",x);
	}
	
	
}
