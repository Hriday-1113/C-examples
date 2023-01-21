#include<stdio.h>
int strlen(char*ptr){
  int length=0;
  while(*ptr!='\0'){
     length++;
     ptr++;
  } 
  return length;
                    }
int value(char c){
  switch(c){
  case 'I':
   return 1;
   case 'X':
   return 10;
   case '\0':
   return 0;
   case 'V':
   return 5;
   case 'C':
   return 100;
   case 'M':
   return 1000;
   case 'L':
   return 50;
   case 'D':
   return 500;

           } 
                }
int main(){
   char roman[100];
   printf("Enter Roman numeral :- ");
    scanf("%s",roman);
  int res=0,s1,s2;
  for(int i=0;i<=strlen(roman)-1;i++){
      s1=value(roman[i]);
      s2=value(roman[i+1]);
      if(s1>=s2)
      {res=res+s1;}
       else {
        res=res+s2-s1;
        i++;
            }                              
                                      }


    printf("The decimal equvivalent is %d",res);




    return 0;
}
