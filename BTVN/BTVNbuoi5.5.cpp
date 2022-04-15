#include<stdio.h>
//tim so duong nho nhat
int main(){
	int n;
	printf("nhap vao n= ");
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int min;
	for(i=0;i<n;i++){
		if(arr[i]>0){
			
			min=arr[i];
			break;
			}
		
		}
		
	for(i=0;i<n;i++){
		if(arr[i]>0&arr[i]<min){
			min=arr[i];
		}
	}
	printf("so nguyen duong nho nhat la:%d",min);
	}
	
	

