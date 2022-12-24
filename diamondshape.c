#include<stdio.h>

int main(){
  int i,j,space; // for 4 rows
  for(i=1;i<=4;i++){
     for(space=1;space<=4-i;space++){
          printf(" ");
                                      }
      for(j=1;j<=i;j++){
      printf("* ");
                       }
    printf("\n");
                  } //main logic ends here next for is just reverse
  for(i=3;i>=1;i--){
   for(space=1;space<=4-i;space++){
          printf(" ");
                                      }
      for(j=1;j<=i;j++){
      printf("* ");
                       }
    printf("\n");
                   }                 
                   return 0;
}
