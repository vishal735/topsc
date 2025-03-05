#include<stdio.h>
main(){
	char str[20],str2[20],flag=0;
	int i=0,j=0;
	printf("\n ente str");
	gets(str);
	printf("\n str=");
	puts(str);
	while((str[i] != '\0')){
		printf("\n str[%d]=%c",i,str[i]);
		i++;
	}
	printf("\n length of str1=%d",i);
	i--;
	while(i>=0){
		printf("\n %d=%c",i,str[i]);
		str2[j]=str[i];
		j++;
		i--;
	}
	printf("\n str=%s",str);
	printf("\n str2=%s",str2);
	i=0;
	while(str[i]!='\0'){
		if(str[i]!=str2[i]){
			flag=1;
		}
		i++;
	}
	(flag==0)?printf("\n str is palindrom"):printf("\n not a palindom");
}
