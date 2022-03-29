#include<stdio.h>

void doA(int *a){
	*refa=20;
	printf("refa=%d",refa);
}

int main(){
	int a=10;
	printf("a=%d",refa);
	printf("&a=%d",&a);
	doA(&a);
	return 0;
}
