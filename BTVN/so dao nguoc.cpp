#include <stdio.h>

int main(){
	int n,a,b,c,d,x,y,z,t,nnnn,nnn,nn,n1;
	printf("Nhap so n:");
	scanf("%d",&n);
	
	a=n%10;
	x=n/10;
	b=x%10;
	y=x/10;
	c=y%10;
	z=y/10;
	d=z%10;
	
	nnnn=a*1000+b*100+c*10+d;
	nnn=a*100+b*10+c;
	nn=a*10+b;
	n1=a;
    
    if(d!=0){
    	printf("So dao nguoc la %d",nnnn);}
    	else if(b==0){
		printf("So dao nguoc la %d",n1);
		}
	else if(c==0){
	    printf("So dao nguoc la %d",nn);}

else
printf("So dao nguoc la %d",nnn);

}

	
	    





	

	
	
