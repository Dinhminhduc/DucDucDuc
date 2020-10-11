#include <stdio.h>

int main(){
	int n,tong=0;
	printf("Nhap so n:");
	scanf("%d",&n);

if(n>=0){
	for(int i=1;i<=n;i++){
		tong = tong+i;
	}
	printf("Tong cua day so la: %d",tong);
}
else
printf("Ban phai nhap so nguyen duong!!!");
}
