#include<stdio.h>
void main(){
   int i, n, c;
   
   printf("The prime numbers in between the range 1 to 100 :");
   for(n = 1;n<=100;n++){
      c = 0;
      for(i=2;i<=n/2;i++){
         if(n%i==0){
            c++;
         break;
      }
   }
   if(c==0 && n!= 1)
      printf("%d ",n);
   }
}
