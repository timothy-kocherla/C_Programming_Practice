#include <stdio.h>
#include <stdlib.h>
int digit_sum(long long n) { int sum=0; n=llabs(n); do { sum+=(int)(n%10); n/=10; } while(n); return sum; }
int main(void) { long long n; printf("Enter an integer: "); if(scanf("%lld",&n)!=1)return 1; printf("Sum of digits = %d\n",digit_sum(n)); return 0; }
