#include<stdio.h>
main(){
	int a,b,c,max,min;
	printf("\n enter the value of a:");
	scanf("%d",&a);
	printf("\n enter the value of b:");
	scanf("%d",&b);
	printf("\n enter the value of c:");
	scanf("%d",&c);
	max = (a >b)?(a>c ? a:c):(b>c ? b:c);
	printf("\n max number is%d",max);
	min = (a<b)?(a<c ? a:c):(b<c ? b:c);
	printf("\n min number is%d",min);
	
}
