#include<stdio.h>
//ith retrurn type ith parameter
int square(int i){
	int result;
	result=i*i;
	return result;
}
//with retrurn without parameter
float areaOfCircle(){
	int r;
	float area;
	printf("\n enter radius");
	scanf("%d",&r);
	area=3.14*r*r;
	return area;
}
//without return type without parameter
void display(){
	printf("\n hello world");
}
//witout return type with parameter
void add(int x, int y){
	int c=x+y;
	printf("\n addition of %d and %d=%d",x,y,c);
}
main(){
	int i=90,ans;
	ans=square(i);
	printf("\n square of %d=%d",i,ans);
	printf("\n area of circle=%f",areaOfCircle());
	display();
	add(1200,30);
}
