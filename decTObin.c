#include<stdio.h>

int main() {
    int n, q=0, r=0, r2;
    printf("enter num : ");
    scanf("%d", &n);

    // n / 2 = remainder1 and quotient
    // quotient % 2 = reminder2
    // print -> remindern...reminder2 reminder 1

        q=n/2;
        r=n%2;

        while(1) {
            if(q==0) {
                break;
            }
            
            r=n%2;
            q=q/2;
            printf("%d",r);

        }
        return 0;

}