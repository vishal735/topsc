#include<stdio.h>
/* largest number amoung three number */
main(){
	int a,b,c;
	printf("/n enter the value of a");
	scanf("%d",&a);
	printf("/n enter the value of b");
	scanf("%d",&b);
	printf("/n enter the value of c");
	scanf("%d",&c);	
	if(a>b && a>c){
		printf("\n a is largest number=%d",a);
	}
	else if(b>a && b>c){
		printf("\n b is largest number=%d",b);
	}
	else if(c>a && c>b){
		printf("\n c is largest number=%d",c);
	}
	else{
		printf("\n wrong input");
	}
}
