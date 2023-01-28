// Guass siedels method for 3 variables
#include<stdio.h>

int main(){
 float arr[3][4],x=0,y=0,z=0;
  float temp[3]; // 0->x,1->y,2->z
  reenter:
  printf("Enter the coeffiecients of the system :- ");
  for(int i=0;i<=2;i++){
     for(int j=0;j<=3;j++){
     scanf("%f",&arr[i][j]);
                          }
 
                       };
   if(arr[0][0]<arr[0][1]+arr[0][2] || arr[1][1]<arr[1][0]+arr[1][2] || arr[2][2]<arr[2][1]+arr[2][0]){
  printf("Guass siedel method not applicable");
  goto reenter;
                     } 
 
 for(int i=0;i<=25;i++){
 temp[0]=(arr[0][3]-arr[0][1]*y-arr[0][2]*z)/arr[0][0];
  x=temp[0];
 temp[1]=(arr[1][3]-arr[1][0]*x-arr[1][2]*z)/arr[1][1];
  y=temp[1];
 temp[2]=(arr[2][3]-arr[2][0]*x-arr[2][1]*y)/arr[2][2];
  z=temp[2];

 }
 printf("(x,y,z)={%f ,%f ,%f}",temp[0],temp[1],temp[2]);
  return 0;
}
