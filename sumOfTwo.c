#include<stdio.h>

int main(){
    int n, target,count=0;
    scanf("%d", &n);

    printf("enter target : ");
    scanf("%d", &target);

    int nums[n];
    for (int i = 0; i <=n-1; i++)
    {
        printf("enter %d digit :", i);
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (nums[i] + nums[j] == target && i != j)
            {
                printf("[%d,%d]\n", i,j);
                count++;
            }
        }
        if (count>0)
            {
                break;
            }
    }
}