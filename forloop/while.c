#include<stdio.h>
main(){
	int num,i,rem,rev=0;
	printf("\n enter the num:");
	scanf("%d",&num);
//	int org=num;
	while(num !=0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	
//	printf("%d",rev);
//	printf("%d",org);
	if(num==rev){
		printf("\n number is palindrom");
	}
	else{
		printf("\n number is not palindrom");
	}
}
