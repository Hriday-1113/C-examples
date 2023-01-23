// calculating eigen values and vector  for 2 by 2 integer matrix
#include<stdio.h>
#include<math.h>
int main(){
   int arr[2][2];// main matrix
  float eigen_values[2];
  float eigenvector1[2];
  float eigenvector2[2];
  
    
   printf("Enter the elements of the matrix:- ");
   for(int i=0;i<=1;i++){
    for(int j=0;j<=1;j++){
        scanf("%d",&arr[i][j]);
    }
   }
int trace_arr=arr[0][0]+arr[1][1];
 int s1=trace_arr*trace_arr;
   int determinant_arr=(arr[0][0]*arr[1][1])-(arr[1][0]*arr[0][1]);
  int s2=4*determinant_arr;
  if(s1-s2<0){
  printf("complex eigen values");
  return 0; 
            }
  eigen_values[0]=(trace_arr+sqrt(s1-s2))/2;
  eigen_values[1]=(trace_arr-sqrt(s1-s2))/2;
   printf("Eigen values are %f %f \n",eigen_values[0],eigen_values[1]);
   
   // calculation of eigen vectors
   // arrays of coeffiecients of  homogeneous equations 
   float arr1[6]={(arr[0][0]-eigen_values[0]),arr[0][1],0,arr[1][0],(arr[1][1]-eigen_values[0]),0}; 
   float arr2[6]={(arr[0][0]-eigen_values[1]),arr[0][1],0,arr[1][0],(arr[1][1]-eigen_values[1]),0}; 
   // array of determinants of homonogeneous equation matrix
   float determinants[2]={(arr1[0]*arr1[4])-(arr1[3]*arr1[1]),(arr2[0]*arr2[4])-(arr2[3]*arr2[1])};
   for(int i=0;i<=1;i++){
 if(determinants[i]!=0){
    if(i==0){
        for(int i=0;i<=1;i++){
            eigenvector1[i]=0;
        }
    }
    if(i==1){
        for(int i=0;i<=1;i++){
            eigenvector2[i]=0;
        }
    }



                       }
 else{
     if(i==0){
     eigenvector1[0]=1;
     eigenvector1[1]=(-arr1[0]*1)/arr1[1];


             }   
     if(i==1){
        eigenvector2[0]=1;
     eigenvector2[1]=(-arr2[0]*1)/arr2[1];

     }


     }

                         }
                      
printf("Eigen vector corresponding to %f is [%f %f]",eigen_values[0],eigenvector1[0],eigenvector1[1]);  
printf("\n");          
 printf("Eigen vector corresponding to %f is [%f %f]",eigen_values[1],eigenvector2[0],eigenvector2[1]);                  

    return 0;
}
