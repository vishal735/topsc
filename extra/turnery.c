#include<stdio.h>
main(){
	int year;
	printf("\n enter the year:");
	scanf("%d",&year);
	(year%4==0 && year%100!=0) || (year %400==0)?
	printf("\n year is leap"):printf("\n year is not leap");
}
