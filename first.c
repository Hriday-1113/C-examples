#include<stdio.h>
int main(){

int num,i,sum=0;
printf("Enter any natural number:- ");
scanf("%d",&num);
for(i=1;sum<num;i++){
    sum=sum+i;
                     }

if(sum==num)
printf("The number is triangular.");
else
printf("The number is not triangular");


}