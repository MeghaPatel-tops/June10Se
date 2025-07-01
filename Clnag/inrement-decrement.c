#include<stdio.h>
main(){
	int a=12,b;
	//b=a++;// first assign value and then inrement :post inrement
	b=++a;//first increment and then assign:pre inrement
	printf("\n b=%d \t a=%d",b,a);
}
