#include<stdio.h>
int series(int x,int y);
main(){
	int x,y;
	printf("\n enter the value x and y");
	scanf("%d %d",&x,&y);
	series(x,y);
}
int series(int x,int y){
	int i;
	for(i=x;i<=y;i++){
		printf("%d \n",i);
	}
}
