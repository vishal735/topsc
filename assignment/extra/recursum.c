#include<stdio.h>
int nSum(int n);
main(){
	int n,result;
	printf("\n enter a number");
	scanf("%d",&n);
	result = nSum(n);
	printf("total sum is %d",result);
	
}
int nSum(int n){
	if(n<=0){
		return 0;
	}
	else{
		int res;
		res=n+nSum(n-1);
		return res;
	}
}
