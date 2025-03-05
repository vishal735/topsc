#include<stdio.h>
void conc(char str,char str2);
main(){
	
	
	char str[20],str2[20];
	
	printf("\n enter str");
	gets(str);
	printf("\n enter st2");
	gets(str2);
}
void conc(char str,char str2){
	int i=0;
	while(str[i] != '\0'){
		i++;
	}
	j=0;
	while (str2[j] != '\0') {
        str[i] = str2[j];  
        i++;
        j++;
    }
    str[i] = '\0';
}
