#include<stdio.h>
/* leap year or not */
main(){
	int year;
	printf("\n enter the year");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0) || (year%400==0)){
		printf("\n yes leap year=%d",year);
	}
	else{
		printf("\n not a leap year=%d",year);
	}
}
