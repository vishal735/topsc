#include<stdio.h>
main(){
	int num,i,count=0;
	printf("\n enter the number");
	scanf("%d",&num);
	if(num<=1){
		printf("\n number is not prime");
	}
	else{
		for(i=1;i<num;i++){
			if(num%i==0){
				printf("%d\n",i);
			}
		}
	}
	if(count>2){
		printf("\n number is not a prime");
	}
	else{
		printf("\n number is prime");
	}
}
