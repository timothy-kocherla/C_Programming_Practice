#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long long n; int value;
    printf("Enter an integer: ");
    if (scanf("%lld",&n)!=1) return 1;
    value = (int)(llabs(n)%10 + (llabs(n)/10)%10);
    printf("Sum of last two digits = %d\n", value);
    return 0;
}
