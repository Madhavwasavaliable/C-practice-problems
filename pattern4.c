#include<stdio.h>
int main()
{
    int a,b,s,n;

    printf("\nEnter the number of Rows:\t");
    scanf("%d", &n);

    for(a = 0; a < n; a++)
    {
        for(s = n - 1; s >= a; s--)
        {
            printf(" ");
        }
        for(b = 0; b <= a; b++)
        {
            printf("*");
        }
        printf("\n");
    }

}