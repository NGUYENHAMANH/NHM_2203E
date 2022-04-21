#include<stdio.h>
#include<math.h>
//BTVN8.1
int luyThua(int x, int y){
int S= pow(x, y);
return S;
}

//BTVN8.3
void nhapMang(int arr[],int n){
	
	for(int i=0;i<n;i++){
		printf("\narr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
}
void xuatMang(int arr[],int n){
	printf("Xuat mang: ");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
int uCln(int a,int b){
	while(a!=b){
		if(a>b){
			a=a-b;
		}else{
			b=b-a;
		}
	}
return a;
}
int uclnCuamang(int arr[],int n){
	int x=arr[0];
	for(int i=0;i<n;i++){
		x= uCln(x,arr[i]);
	}
	return x;
}
//BTNV8.2
int maxCuamang(int arr[],int n){
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}	
	}
	return max;
}
// tim so nt nho nhat lon hon max

int main(){
	printf("luy thua la: %d", luyThua(3,5));
	
	int arr[10];
	nhapMang(arr,10);
	xuatMang(arr,10);
	int s=uclnCuamang(arr,10);
	printf("\nUCLN cua mang la: %d",s);
	printf("\nmax cua mang la: %d",maxCuamang(arr,10));
}
