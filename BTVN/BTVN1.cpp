#include<stdio.h>
int main(){
	int a;
	printf("nhap so nguyen a:");
	scanf("%d",&a);
	if((a>1)&&(a<9)){
		if((a>=2)&&(a<=7)){
			printf("day la thu:%d\n",a);
		}else{
			printf("day la chu nhat");
			
		}
	}else{
		printf("day khong phai ngay trong tuan");
	}
	
}
