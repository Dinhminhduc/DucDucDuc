#include<stdio.h>

int main(){
	int n=100,tong=0;
	
	for(int i=0;i<n;i++)
	    if(i%2!=0){
	    	tong=tong+i;
		}
	printf("TOng cua 100 so le dau tien la %d",tong);
}
