#include <stdio.h>
int main(void) {
    long long n;
    printf("Enter an integer: ");
    if (scanf("%lld",&n)!=1) return 1;
    printf("Result = %lld\n", n/100);
    return 0;
}
