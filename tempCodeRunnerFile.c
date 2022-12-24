// sum of n natural numbers through recursion
#include<stdio.h>
int f(int x){
  int sum;
  if(x<=1)
  return x;
  sum=x+f(x-1);
  return sum;
            }
int main(){
  int i;
  printf("Enter any number:- ");
  scanf("%d",&i);
   printf("The sum of first %d natural numbers is %d",i,f(i));
  return 0;
}