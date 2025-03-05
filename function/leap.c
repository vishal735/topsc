#include<stdio.h>
void checkLeap(year);
main(){
	int year;
	printf("\n enter the year");
	scanf("%d",&year);
	checkLeap(year);
}
void checkLeap(year){
	
	if((year%4==0 && year%100!=0) || year%400==0){
		printf("%d is leap year",year);
	}
	else{
		printf("%d is not leap year",year);
	}
}
