#include<stdio.h>
/*
if(cond1){
	if(cond2){
		//block
	}
}

*/
main(){
	int maths,phy,chem,subtotal,total;
	printf("\n Enter the maths phy chem marks");
	scanf("%d %d %d",&maths,&phy,&chem);
	
	if(maths>=65 && phy>=55 && chem>=50){//66+56+51= 173// 122
		subtotal = maths + phy;
		total= maths+phy+chem;
		if(subtotal >=140 || total >=190){
			printf("\n eligible");
		}
		else{
			printf("\n inner  not eligible");

		}
	}
	else{
		printf("\n not eligible");
	}
}
