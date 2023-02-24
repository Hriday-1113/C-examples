#include<stdio.h>

 void xstrcat(char *name1,char *name){
    int length=0;
    char*ptr=name1;
    while(*name1!='\0'){
            length++;
            name1++;
    }
    
    while(*name!='\0'){
       ptr[length]=*name;
        length++;
        name++;
    }
     
     ptr[length]='\0';
                                     }


int main(){
 char name[20]="Ea sports";
 char deer[30]="Cricket";
 xstrcat(deer,name);
 printf("%s",deer);
  


}
