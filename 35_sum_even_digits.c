#include <stdio.h>
#include <stdlib.h>
int even_digit_sum(long long n) { int sum=0; n=llabs(n); do { int d=(int)(n%10); if(d%2==0)sum+=d; n/=10; } while(n); return sum; }
int main(void) { long long n; printf("Enter an integer: "); if(scanf("%lld",&n)!=1)return 1; printf("Sum of even digits = %d\n",even_digit_sum(n)); return 0; }
