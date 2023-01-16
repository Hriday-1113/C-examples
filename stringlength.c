// this fundtion uses xstrlen fuction to calculate length of strings
#include<stdio.h>


int xstrlen(char*m){
    int length=0;
    while(*m!='\0'){
      length++;
   m++;
    }
    return length;
}
int main(){
  char arr[1000];
  printf("Enter any string :- ");
  scanf("%[^\n]s",arr);
      int len;
      len=xstrlen(&arr[0]);
      printf("The string length is %d",len);
}
