#include<stdio.h>

int main() {
    int n;
    printf("enter n : ");
    scanf("%d", &n);

    int arr[n];
    for (int j = 0; j < n; j++)
    {
        printf("enter array element : ");
        scanf("%d", &arr[j]);
    }
    
    int min = arr[0], temp=0;

    for (int i = 0; i < n; i++)
    {
        for (int k = i; k < n; k++)
        {
            if(min > arr[k]){
                temp = arr[k];
                arr[k] = min;
                min = temp;
            }
        }
        arr[i] = min;
        min = arr[i+1];
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    
    
}