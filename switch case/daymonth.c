#include<stdio.h>
/* write a c program for reading any month number are display the month name as a number */
main(){
	int month;
	printf("/n enter month in 1-12:");
	scanf("%d",&month);
	switch(month){
	
		case 1:
			printf("\n 31");
			break;
		case 2:
			printf("\n 28");
			break;
		case 3:
			printf("\n 31");
			break;
		case 4:
			printf("\n 30");
			break;
		case 5:
			printf("\n 31");
			break;
		case 6:
			printf("\n 30");
			break;
		case 7:
			printf("\n 31");
			break;
		case 8:
			printf("\n 31");
			break;
		case 9:
			printf("\n 30");
			break;
		case 10:
			printf("\n 31");
			break;
		case 11:
			printf("\n 30");
			break;
		case 12:
			printf("\n 31");
			break;
		default:
			printf("\n wrong input");
	}
}

