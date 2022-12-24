#include<stdio.h>

int main(){
   int a,n=2;
   printf("Enter a natural number :- ");
   scanf("%d",&a);
  if(a==1){
  printf("The number is not prime.");
  return 0;
          }
   while(n<a/2){
    if(a%n==0){
        printf("The number is not prime.");
        break;
              }
    n++;            
              } 
       
    printf("The number is prime .");
                           
     
                            
return 0;
}
