#include<stdio.h>
#include<math.h>
//tinh tong cac chu so cua mot so nguyen
int tongCacchuso(int n){
	int s=0;
	int a;
	while(n!=0){
		a=n%10;
		s=s+a;
		n=n/10;
	}
	return s;
}

int chuVitamgiac(int a,int b, int c){
	return a+b+c;
}

int dienTichtamgiac(int a,int b,int c){
	int s;
	s=sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a))/4;
	return s;
	

}

int uCln(int a,int b){
	int BCNN;
	int m=a;
	int n=b;
	while(a!=b){
		if(a>b){
			a=a-b;
		}else{
			b=b-a;
		}
}
return a;
return BCNN=(m*n)/a;
}










int main(){
	int tong=tongCacchuso(12);
	printf("tong cac chu so= %d",tong);
	
	int chuvi=chuVitamgiac(3,4,5);
	printf("\nchu vi tam giac la:%d",chuvi);
	
	int S=dienTichtamgiac(3,4,5);
	printf("\ndien tich tam giac la:%d",S);
	
	
	printf("\nuoc chung lon nhat la:%d", uCln(6,9));
	
	
}
