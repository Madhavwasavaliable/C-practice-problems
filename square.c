#include<stdio.h>

int main()
{
    int i,j,n,x=0;
    scanf("%d",&n);
    x=2*n-1;
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x;j++)
        {
            if((j<=x-i+1)&&(j-i>=0))
                printf("%2d ",n-i+1);
            else if(j+i<=x+1)
                printf("%2d ",n-j+1);
            if(i+j>x+1)
            {
                if(i>=j)
                    printf("%2d ",n-x+i);
                else
                    printf("%2d ",n-x+j);
            }
        }
        printf("\n");
    }
     return 0;
}