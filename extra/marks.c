#include<stdio.h>
main(){
	int maths,science,english,python,javascript,total;
	float percentage;
	printf("\n enter the marks of maths");
	scanf("%d",&maths);
	printf("\n enter the marks of science");
	scanf("%d",&science);
	printf("\n enter the marks of english");
	scanf("%d",&english);
	printf("\n enter the marks of pyhon");
	scanf("%d",&python);
	printf("\n enter the marks of javascript");
	scanf("%d",&javascript);
	total=maths+science+english+python+javascript;
	printf("\n total marks=%d",total);
	percentage=(total*100)/500;
	printf("\n percentage=%f",percentage);
	
	
}
