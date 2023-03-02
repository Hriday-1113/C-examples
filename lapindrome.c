#include<stdio.h>
#include<string.h>
// function vsort to sort a string from a particular index to desired length
char * vsort(char* string,int index, int string_length){
     for(int i=index;i<=string_length-1;i++){
            for(int j=i+1;j<=string_length-1;j++){
                //swaping
                if(string[j]<string[i]){
                    char temp;
                    temp=string[i];
                    string[i]=string[j];
                    string[j]=temp;
                }
            }
        }
      
        return string;





}
int main(){
    int sl;char string[2000],string_1[2000],string_2[2000];
    
   
   printf("Enter a string:- ");
    scanf("%s",string);
    sl=strlen(string);
    //for odd string
    if(sl%2==1){
        for(int i=0;i<=(sl/2)-1;i++){
            string_1[i]=string[i];

        }
        string_1[(sl/2)]='\0';
       int j=0;
         for(int i=(sl/2)+1;i<sl;i++,j++){
            string_2[j]=string[i];
        }
      string_2[j]='\0';
       
      vsort(string_1,0,strlen(string_1));
      vsort(string_2,0,strlen(string_2));
                     
    

    
    int y=strcmp(string_1,string_2);
    if(y==0){
        
        printf("Given string is Lapindrome");
        
    }
    else{
      printf("Given string is not a Lapindrome");
    }
    }
    //end of odd condition
     
   // for even string length
    else{
        for(int i=0;i<=(sl/2)-1;i++){
            string_1[i]=string[i];

        }
        string_1[(sl/2)]='\0';
       int j=0;
         for(int i=(sl/2);i<sl;i++,j++){
            string_2[j]=string[i];
        }
      string_2[j]='\0';

       vsort(string_1,0,strlen(string_1));
       vsort(string_2,0,strlen(string_2));

       int z=strcmp(string_1,string_2);
    if(z==0){
        printf("Given string is Lapindrome");
    }
    else{
        printf("Given string is not a Lapindrome");
    }
    }
      











    return 0;
}
