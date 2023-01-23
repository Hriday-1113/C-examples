// Jacobi method to calculate liinear equation in 2 variables
#include<stdio.h>

int main(){
    int arr[6]; 
    float m,n,x=0.0,y=0.0;

    reenter:  //label for goto
    printf("Enter coefficients of system :- ");
    for(int i=0;i<=5;i++){
        scanf("%d",&arr[i]);
    };
   
    if(arr[0]<arr[1] || arr[3]>arr[4]){
    printf("Jacobi method not applicable\n ");
        goto reenter;
    }
  for(int i=0;i<=30;i++){
   m=(arr[2]-arr[1]*y)/arr[0];
   n=(arr[5]-arr[3]*x)/arr[4];
    y=n;
   x=m;
       
                        }
      printf("(x,y)= {%f, %f}",m,n);                  
    return 0;
}
