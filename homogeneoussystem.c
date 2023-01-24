// Algorithm for homogeneous system of equations
#include<stdio.h>

int main(){
    int coeff[2][3];
    float y;
    printf("Enter the coefficients of the system rowise :- ");
    
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
        scanf("%d",&coeff[i][j]);}
    }
  int  determinant=(coeff[0][0]*coeff[1][1])-(coeff[1][0]*coeff[0][1]);
  //if rank = number of unknowns
  if(determinant!=0){ // trivial solutions 
    printf("(x,y)={0,0},Trivial solutions");
  }
  else{
   y=((float)-coeff[0][0])/(float)coeff[0][1]; 
  printf("(x,y)={t,t*%f}, where 't' belongs to real number ",y);
   
      }
    return 0;
}
