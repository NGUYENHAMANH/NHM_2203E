#include<stdio.h>
int main(){
	int n;
	printf("nhap vao n= ");
	scanf("%d",&n);
	int arr[n];
	int i;
	float T;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	float S=0;
	int C=0;
	for(i=0;i<n;i=i+2){
		if(arr[i]%2!=0){
			printf("cac so le la:%d\n",arr[i]);
			S+=arr[i];
			C++;
			
			
		}
	}
}
