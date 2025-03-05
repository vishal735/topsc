#include<stdio.h>
main(){
	int ch,circle;
	printf("\n press 1 for area of circle");
	printf("\n press 2 for prime checkin");
	printf("\n press 3 for simple intrest");
	printf("\n press 4 for stop task");
	printf("\n enter your choice");
	scanf("%d",&ch);
	for(;;){
		if(ch==1){
			goto circle;
		}
		else if(ch==2){
			break;
		}
	}
	circle:{
		float num,ans;
		printf("\n enter radius");
		scanf("%d",&num);
		ans=num*3.14;
		printf("\n area of circle is%d",ans);
	}
}
