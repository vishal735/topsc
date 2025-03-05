#include<stdio.h>
/* accept coordinate oint in a xy coodinate system and determine  */
main(){
	int a,b;
	printf("/n enter the number a and b");
	scanf("%d %d",&a,&b);
	if(a>0 && b>0){
		printf("\n both are postive");
	}
	else if(a>0 && b<0){
		printf("\n a is positve b is neative");
	}
	else if(a<0 && b>0){
		printf("\n a is negative b is postive");
	}
	else if(a<0 && b<0){
		printf("\n both are negative");
	}
	else{
		printf("\n zero centerrline");
	}
}
