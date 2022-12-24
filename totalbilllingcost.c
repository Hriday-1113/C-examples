//Price of n items is input and according cgst and sgst price gets added 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of items :- ");
    scanf("%d",&n);
     while(n<0){
      printf("Enter another number:- ");
      scanf("%d",&n);
               }
    float temp;
    float sum=0;
    printf("Enter the price of individual item:- ");
   for (int i = 0; i < n; i++)
    {
        scanf("%f", &temp);
        if(temp>=0 && temp<=200){
           temp=temp+((5.0/100.0)*temp);
           sum=sum+temp;        }
        else if(temp>200 && temp<=500){
            temp=temp+((9.0/100.0)*temp);
            sum=sum+temp;
                                      }
        else{
            temp=temp+((13.0/100.0)*temp);
            sum=sum+temp; 
            }
    } 
 printf("The total billing cost is Rs %f",sum);

}
