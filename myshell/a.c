#include <stdio.h>
int main(){
	int a=10;
	int *b=&a;
	
	*b=20;
	printf("*b=%d",*b);
	for(int i=0;i<10;i++){
	printf("hello c\n");
	}
}
