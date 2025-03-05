#include<stdio.h>
main(){
	int n;
	printf("\n enter a number");
	scanf("%d",&n);
	int i,j,mid=(n-1)/2,lst=n-1;
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
			if(i==mid || j==mid || i<mid &&j==0 || i>mid && j==lst || j<mid && i==lst || j>mid && i==0){
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
