#include<stdio.h>
// tim so le cuoi cung cua mang
int main(){
	int n;
	printf("nhap vao n= ");
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
	
	scanf("%d",&arr[i]);
	}
	
	for(i=n-1;i<n;i--){
	
	if(arr[i]%2!=0){
		printf("so le cuoi cung cua mang la: %d",arr[i]);
		break;
	}
	}
}
