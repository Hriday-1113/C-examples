#include<stdio.h>
void xstrcat(char*m,char*n,int lensource){ //temp,source

 while(*n!='\0'){
 *(m+lensource)=*n;
  lensource++;
  n++;
 }
*(m+lensource)='\0';

}

int main(){
char source[7]="Folks!";
char temp[30]="Hello";
  xstrcat(temp,source,5);
 printf("%s",temp);
  return 0;
}