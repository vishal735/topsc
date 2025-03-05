#include<stdio.h>
/* write a c program for reading any month number are display the month name */
main(){
	int day;
	printf("/n enter day in 1-7:");
	scanf("%d",&day);
	switch(day){
	
		case 1:
			printf("\n monday");
			break;
		case 2:
			printf("\n tuesday");
			break;
		case 3:
			printf("\n wednessda");
			break;
		case 4:
			printf("\n thursday");
			break;
		case 5:
			printf("\n friday");
			break;
		case 6:
			printf("\n saturday");
			break;
		case 7:
			printf("\n sunday");
			break;
		
		default:
			printf("\n wrong input");
	}
}

