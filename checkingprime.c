#include<stdio.h>
// 2 to num/2 we check all numbers
int prime_check(int num,int div){
    if(div<=num/2){
     if(num%div==0)
     return 0;
     else
     return prime_check(num,div+1);
                  }
  else return 1;                              }
int main(){
  int num;
printf("Enter any value :- ");
scanf("%d",&num);
 if(prime_check(num,2)==1)
 printf("The number is prime");
 else
  printf("The number is not prime");
 return 0;
}
