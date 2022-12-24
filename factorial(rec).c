#include<stdio.h>
int fact(int x){
  int p;
  if(x==1 || x==0)
  return 1;
  else{
  p=x*fact(x-1);
  return p;
      }
               }
int main(){
    int z;
    printf("Enter any natural number(<16) :- ");
    scanf("%d",&z);
    printf(" %d!= %d",z,fact(z));
return 0;
}
