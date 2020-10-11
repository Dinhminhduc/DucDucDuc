#include <stdio.h>

int main(){
	int n;
	float tong=0;
	printf("Nhap so n:");
	scanf("%d",&n);
	
	if(n>0){
	for(int i =1;i<=n;i++){
		tong=tong+(float)1/i;
	}
	printf("Tong cua day so la %.2f",tong);
}
else 
printf("Ban phai nhap n la so nguyen duong!!!");
}
