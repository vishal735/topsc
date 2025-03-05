#include<stdio.h>
main(){
	int num;
	printf("\n enter a number");
	scanf("%d",&num);
	int i,j,mid=(num-1)/2,lst=num-1;
	for(i=0;i<=num-1;i++){
		for(j=0;j<=num-1;j++){
			if(i==mid || j==mid || i<mid &&j==0 || i>mid && j==lst ||j<mid &&i==lst || j>mid && i==0){
				printf("*");
				printf(" ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}
