#include<stdio.h>
/* positive or negative */
main(){
	int maths,phy,chem,total,subtotal;
	printf("/n enter maths marks:");
	scanf("%d",&maths);
	printf("/n enter maths phy:");
	scanf("%d",&phy);
	printf("/n enter maths chem:");
	scanf("%d",&chem);
	total=maths+phy+chem;
	printf("/n total is:%d",total);
	subtotal=maths+phy;
	printf("/n sub total is:%d",subtotal);
	if(maths>=65 && phy>=55 && chem>=50){
		if(total>=190 || subtotal>=140){
			printf("\n eligable for admission ");
		}
		else{
			printf("\n not eligable for admission ");
		}
		
	}
	else{
		printf("\n not eligable for admission ");
	}
}
