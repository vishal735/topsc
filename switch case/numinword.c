#include<stdio.h>
/* write a c program for reading any month number are display the month name */
main(){
	int number;
	printf("/n enter number in digit:");
	scanf("%d",&number);
	switch(number){
	
		case 1:
			printf("\n one");
			break;
		case 2:
			printf("\n two");
			break;
		case 3:
			printf("\n three");
			break;
		case 4:
			printf("\n four");
			break;
		case 5:
			printf("\n five");
			break;
		case 6:
			printf("\n six");
			break;
		case 7:
			printf("\n seven");
			break;
		
		default:
			printf("\n wrong input");
	}
}

