#include<stdio.h>
/* grade system */
main(){
	char inp;
	printf("\n enter a grade:");
	scanf("%c",&inp);
	switch(inp){	
		case 'e':
			printf("\n excellent");
			break;
		case 'v':
			printf("\n very good");
			break;
		case 'g':
			printf("\n good");
			break;
		case 'a':
			printf("\n average");
			break;
		case 'f':
			printf("\n ail");
			break;
		default :
			printf("\n invalid");
			break;
	}
}
