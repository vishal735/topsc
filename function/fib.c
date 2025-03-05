#include<stdio.h>
void fibo(b);
main(){
	int b;
	printf("\n enter the end of series");
	scanf("%d",&b);
	fibo(b);
}
void fibo(b){
	int a,ans,i;
	for(i=1;i<=b;i++){
		ans=a+b;
		a=b;
		b=ans;
	}
}
