#include<stdio.h>
int sum(int x){ int r,n;
 if(x==0)
 return 0;
else  {
 r=x%10;
 x=x/10;
 n=r+sum(x);
 return n;}




              }
int main(){
    int i;
    printf("Enter any number :- ");
    scanf("%d",&i);
    printf("The sum is %d",sum(i));
return 0;
}