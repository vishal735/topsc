#include<stdio.h>
/* tempreture in centigade and display a suitable message*/
main(){
	int temp;
	printf("\n enter tempreture:");
	scanf("%d",&temp);
	if(temp <=0 ){
		printf("\n freezing weather");
	}
	else if(temp <= 20) {
		printf("\n very cold weather");
	}
	else if(temp<=30){
		printf("\n cold weather");
	}
	else if(temp<=40){
		printf("\n normal weather");
	}
	
	else if(temp>40){
		printf("\n very hot weather");
	}
	else{
		printf("\n wrong input");
	}
}
