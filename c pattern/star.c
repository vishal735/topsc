#include<stdio.h>
main(){
	int i,j,k;
	for(i=1;i<=10;i++){
		for(k=1;k<=10-i;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			if(i%2!=0){
				printf(" * ");
			}
		}
		
		printf("\n");
		
	}
}
