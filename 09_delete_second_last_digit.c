#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long n, sign, a, result;
    printf("Enter an integer with at least two digits: ");
    if(scanf("%lld",&n)!=1) return 1;
    sign = n < 0 ? -1 : 1; a=llabs(n);
    if(a<10) { printf("The number has no second-last digit.\n"); return 0; }
    result = (a/100)*10 + a%10;
    printf("Result = %lld\n", sign*result);
    return 0;
}
