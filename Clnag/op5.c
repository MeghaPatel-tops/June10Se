#include<stdio.h>
main(){
	int num;
	const float pi=3.14;
	printf("\n Enter the num");
	scanf("%d",&num);
	
	printf("\n num=%d",num);
	num=14;
	printf("\n num=%d",num);
	pi=2.5;
	printf("\n pi=%f",pi);
	
	
//	//?:=>  (condition)?(true):(flase)
//	(num > 0)?printf("\n Positive"):printf("\n negative");
//	
//	(num%2==0)?printf("\n Even"):printf("\n Odd");
}
