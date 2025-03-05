#include<stdio.h>
/* write a c program for reading any month number are display the month name */
main(){
	int month;
	printf("/n enter month in 1-12:");
	scanf("%d",&month);
	switch(month){
	
		case 1:
			printf("\n january");
			break;
		case 2:
			printf("\n february");
			break;
		case 3:
			printf("\n march");
			break;
		case 4:
			printf("\n april");
			break;
		case 5:
			printf("\n may");
			break;
		case 6:
			printf("\n jun");
			break;
		case 7:
			printf("\n july");
			break;
		case 8:
			printf("\n augest");
			break;
		case 9:
			printf("\n september");
			break;
		case 10:
			printf("\n octomber");
			break;
		case 11:
			printf("\n november");
			break;
		case 12:
			printf("\n december");
			break;
		default:
			printf("\n wrong input");
	}
}

