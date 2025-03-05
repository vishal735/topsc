#include<stdio.h>
main(){
	int profit,loss,total;
	printf("\n enter a profit amount:");
	scanf("%d",&profit);
	printf("\n enter a loss amount:");
	scanf("%d",&loss);
	total=profit-loss;
	printf("\n you can booked your profit=%d",total);
}
