#include<stdio.h>
main(){
	int num;
	printf("\n Enter the num");
	scanf("%d",&num);
	//(condition)?true:false;
	(num > 0)?printf("\n positive"):printf("\n negative");
}
