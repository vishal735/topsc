#include<stdio.h>
main(){
       float p,n,r,i;
       printf("\n enter the principle, no of year,rate of intrest:");
       scanf("%f %f %f",&p,&n,&r);
       i=(p*n*r)/100;
       printf("\n simple interst=%f",i);  
}
