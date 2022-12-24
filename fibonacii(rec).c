#include<stdio.h>
int fib(int n){
  int p;
  if(n==1 || n==0)
  return n;
  else
  p=fib(n-1)+fib(n-2);
  return p;
               }
int main(){
    int x,i=1;
    printf("Enter which term you wanna find:- ");
    scanf("%d",&x);
    printf("%d is the required term.\n",fib(x-1));
    printf("The series is :- ");
    while(i<=x){
     printf("%d ",fib(i-1));
         i++;      }
    
    return 0;

}
