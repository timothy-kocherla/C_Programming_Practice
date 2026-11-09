#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long n,a,sign,result,d;
    printf("Enter an integer with at least two digits: ");
    if(scanf("%lld",&n)!=1) return 1;
    sign=n<0?-1:1; a=llabs(n);
    if(a<10) { printf("The number has no second-last digit.\n"); return 0; }
    d=(a/10)%10;
    result=(a/100)*100 + (2*d)*10 + a%10;
    printf("Result = %lld\n",sign*result);
    return 0;
}
