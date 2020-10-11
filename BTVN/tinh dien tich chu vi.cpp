#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,p,s;
	printf("Hay nhap ba so a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
if(a>0,b>0,c>0){
	if(a+b>c&&a+c>b&&b+c>a){
		p=a+b+c;
	    s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("\nChu vi cua tam giac la:%d",p);
		printf("\nDien tich cua tam giac la %d",s);
	}else
	printf("\nHay nhap lai ba canh a,b,c");
}else
printf("\nHay nhap lai ba so a,b,c nguyen duong");
}
