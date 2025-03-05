#include<stdio.h>
main(){
	int start,end,i,ch;
	printf("\n press 1 for forword loop. \n press 2 for backword loop");
	printf("\n enter the start value \n enter the end value");
	scanf("%d %d",&start,&end);
	printf("\n enter your choice:");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			for(i=start;i<=end;i++){
				printf("\n i=%d",i);
			}
			break;
		case 2:
			for(i=end;i>=start;i--){
				printf("\n i=%d",i);
			}
			break;
			
		default:
			printf("\n invalid input");
			
	}
}
