#include<stdio.h>
#include<string.h>
int main(){
char string[100];
int position=0,length=0,length_string=0;
printf("Enter a string:- ");
gets(string);
printf("Enter postion number:-");
scanf("%d",&position);
printf("Enter length to be extracted:- ");
scanf("%d",&length);
length_string=strlen(string);
while(length>length_string-position+1){
    printf("Enter length appropiately:- ");
    scanf("%d",&length);
}
if(length==0){
    return 0;

}
else{
for(int i=1;i<=length;i++){

printf("%c",string[position-1]);
position++;

}}
return 0;
}
