#include<stdio.h>
int primeCheck(int num);
main(){
	int num;
	printf("\n enter a number");
	scanf("%d",&num);
	if(primeCheck(num)){
		printf("%d is prime",num);
	}
	else{
		printf("%d is not prime",num);
	}
}
int primeCheck(int num){
	int i;
	for(i=2;i<num;i++){
		if(num%i==0){
			return 0;
		}
	}
	return 1;
}
