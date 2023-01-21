#include<stdio.h>
struct point{ int x,y; };
struct rectangle{
  struct point lower_right,upper_left;
}r;
int area(struct rectangle r){
 int length,breadth;
 length=r.lower_right.x-r.upper_left.x;
 breadth=r.upper_left.y-r.lower_right.y;
 return length*breadth;
}
int main(){
    
    printf("Enter upper left corner points:- ");
    scanf("%d %d",&r.upper_left.x,&r.upper_left.y);
     printf("Enter lower right corner points:- ");
  scanf("%d %d",&r.lower_right.x,&r.lower_right.y);
  printf("The area is %d square units",area(r));
    return 0;
}
