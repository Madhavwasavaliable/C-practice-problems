#include<stdio.h>

int main() {
    int a, sum = 0;

    printf("enter num : ");
    scanf("%d", &a);

    for (int i = 1; i <=a; i++)
    {
        sum = sum + i;
    }

    printf("sum till a is %d", sum);
    return 0;
}