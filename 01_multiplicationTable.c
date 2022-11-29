#include<stdio.h>

int main() {
    int a;

    printf("enter num : ");
    scanf("%d", &a);

    for (int i = 1; i <=10 ; i++)
    {
        printf("\n%d * %d = %d", a, i, a * i);
    }
    return 0;
}