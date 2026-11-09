#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long n;
    printf("Enter an integer with at least two digits: ");
    if (scanf("%lld",&n)!=1) return 1;
    n=llabs(n);
    if(n<10) { printf("The number has no second-last digit.\n"); return 0; }
    printf("Second-last digit = %lld\n", (n/10)%10);
    return 0;
}
