#include<stdio.h>

main(){
	int a[2][2]={1,2,3,4},b[2][2]={1,2,3,4};
	int c[2][2],m;
	int i,j,k;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			m=0;
			for(k=0;k<2;k++){
				m+=a[i][k]*b[k][j];
			}
			c[i][j]=m;
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t %d",c[i][j]);
		}
		printf("\n");
	}
	
	
}
