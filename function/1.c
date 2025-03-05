#include<stdio.h>
void display(); //function declaration
void add(int x,int y);
main(){
	display(); //function calling
	add(100,200);
	add(20,52);
}
void display(){
	printf("\n hello world"); //function defination
}
void add(int x, int y){
	int c=x+y;
	printf("\n addition of %d and %d=%d",x,y,c);
}
