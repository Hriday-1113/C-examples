//pattern
/* 
5432*
543*1
54*21
5*321
*4321
*/
#include<stdio.h>
int main()
{
    int str=1;
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=1;j--)
        {
            if(j==str)
            {
                printf("*");
                continue;
            }
            printf("%d",j);
        }
        str++;
        printf("\n");
}
return 0;
}
