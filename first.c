#include<stdio.h>

int xstrcmp(  char*arr1,  char*arr2){
      int length1=0,length2=0,i=0;
      char *a1=arr1,*a2=arr2;
      while(*arr1!='\0' && *arr2!='\0'){
        length1++;length2++;
        arr1++;arr2++;
                        }
                   
    
          
      if(length1==length2){
       for(i=0;i<length1;i++){
          if(*(a1+i)!=*(a2+i)){
            return 1;
                              }
             
                              }
      return 0;
                          }
    else
                          
      return 1;
}
int main(){
   char masterlist[6][20]={"Parag","Manas","Hriday","Gayatri","Nilesh","Daksh"};
   int a;
   char yourname[20];
   printf("Enter your name:- ");
   scanf("%[^\n]s",yourname);
   for(int i=0;i<=5;i++){
    a=xstrcmp(&masterlist[i][0],&yourname[0]);
    if(a==0)
   { printf("You are welcomed");
    
    break;}
                       }
      if(a==1)
      printf("You are a tresspasser.");
}