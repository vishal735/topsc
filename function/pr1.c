#include<stdio.h>
void addition(int x,int y);
void sub(int x,int y);
void multi(int x,int y);
void div(int x,int y);
main(){
	addition(12,34);
	sub(12,34);
	multi(12,34);
	div(12,34);
}
void addition(int x,int y){
	int c=x+y;
	printf("\n %d+%d=%d",x,y,c);
}
void sub(int x,int y){
	int c=x-y;
	printf("\n %d-%d=%d",x,y,c);
}
void multi(int x,int y){
	int c=x*y;
	printf("\n %d*%d=%d",x,y,c);
}
void div(int x,int y){
	int c=x/y;
	printf("\n %d/%d=%d",x,y,c);
}


