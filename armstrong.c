#include<stdio.h>
#include<math.h>

int main() {
    int n, rem=0, sum=0, remn=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        rem = n%10;
        sum = pow(rem,n);
        n/=10;
    }
    
}