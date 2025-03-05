#include<stdio.h>
main(){
	int num,i,rem,rev;
	printf("\n enter the num:");
	scanf("%d",&num);
	while(num !=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("\n rev num=%d",rev);
}
