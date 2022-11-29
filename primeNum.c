#include<stdio.h>

int main() {
    int a, count = 0 ;

    printf("enter num : ");
    scanf("%d", &a);

    for(int i = 1; i<=a; i++) {
        if(a % i == 0) {
            count++;
        }
    }
    if(count == 2) {
        printf("prime");
    }
    else {
        printf("not prime");
    }
    return 0;
}