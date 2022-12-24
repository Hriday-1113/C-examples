#include<stdio.h>
int main(){  
 int n;
 printf("Enter number of rows:- ");
 scanf("%d",&n);
  for(int i=1;i<=n;i++){
  if(i==1){
printf("0 \n");
          }
  else if(i==2)
  printf("0 1 \n");
  else{
  int t1=0,t2=1,tn;
  printf("%d %d ",t1,t2);
  for(int m=2;m<i;m++){
  tn=t2+t1;
  printf("%d ",tn);
  t1=t2;
  t2=tn;}               
  printf("\n");    }            
                       }       
                       
                        }