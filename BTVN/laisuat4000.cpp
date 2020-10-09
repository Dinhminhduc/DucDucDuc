#include <stdio.h>

int main(){
	float t=4000,t1,t2,t3,t4;
	
	t1=(t*8)/100+t;
	t2=(t1*8)/100+t1;
	t3=(t2*8)/100+t2;
	t4=(t3*8)/100+t3;
	
	printf("So tien nhan duoc sau 4 nam la: %f",t4);
}
