#include <stdio.h>

int main() 
{
    int i,j;
    int r=3;
    int a=r-1;
    int z=a-1;
    for(i=1;i<=r;i++)
    {
        for(j=0;j<i;j++)
        {
            if(j==a)
            {
                int b=j-1;
                int d=a*b;
                printf("%d ",i+d);
                
                
            }
            else if(j==z)
            {
                int e=a*j;
               int l=i+e;
                printf("%d ",l-1);
            }
            else
            {
                int e=a*j;
                printf("%d ",i+e);
                
            }
        }printf("\n");
    }
   
    printf("Hello world");

    return 0;
}
