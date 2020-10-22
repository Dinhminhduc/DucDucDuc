#include<stdio.h>
int main(){
	int a[100],n,i,j,s;
	printf("Nhap n so nguyen:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("\nNhap so thu %d:",i);
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n-1;i++){
		for(j=i+1;j<=n;j++){
			if(a[i]>a[j]){
				s=a[i];
				a[i]=a[j];
				a[j]=s;
			}
		}
	}
	printf("\nPhan tu cua mang sap xep tu be den lon la:");
	for(i=1;i<=n;i++){
		printf(" %d",a[i]);
	}
}
