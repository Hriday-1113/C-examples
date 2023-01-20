#include<stdio.h>
#include<stdlib.h>
void xstrcpy(char*target,const char*source){
   while(*source!='\0'){
     *target=*source;
     source++;
     target++;
   }
   *target='\0';
                                           }
int xstrlen(char*ptr){
  int length=0;
  while(*ptr!='\0'){
    length++;
    ptr++;
  } 
     return length;                }
int main(){
    char *name[3],n[20],*temp;
    for(int i=0;i<=2;i++){
    int length=0;

    printf("Enter name:-");
    gets(n);
  length=xstrlen(n);
   temp=(char*)malloc(length+1);
   xstrcpy(temp,n);
   name[i]=temp;
   }
   int i=0;
   while(i<=2){
   printf("%s",name[i]);
   i++;}
    return 0;
}
