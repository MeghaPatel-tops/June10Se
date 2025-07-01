#include<stdio.h>
main(){
	int a=10;
	a-=3;//a=a-3;
	printf("\n a=%d",a);
	
	//size of operator
	printf("\n size of int=%d",sizeof(a));
	printf("\n size of float=%d",sizeof(float));
	printf("\n size of double=%d",sizeof(double));
}
