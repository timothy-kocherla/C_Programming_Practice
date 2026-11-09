#include <stdio.h>
int main(void) {
    long long a, b;
    printf("Enter two integers: ");
    if (scanf("%lld %lld", &a, &b) != 2) return 1;
    printf("Result = %lld\n", a*a + b*b*b);
    return 0;
}
