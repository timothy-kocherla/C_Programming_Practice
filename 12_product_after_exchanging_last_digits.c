#include <stdio.h>
int main(void) {
    long long a,b, swapped_a,swapped_b;
    printf("Enter two non-negative integers: ");
    if(scanf("%lld %lld",&a,&b)!=2 || a<0 || b<0) return 1;
    swapped_a=(a/10)*10+b%10;
    swapped_b=(b/10)*10+a%10;
    printf("Product = %lld\n",swapped_a*swapped_b);
    return 0;
}
