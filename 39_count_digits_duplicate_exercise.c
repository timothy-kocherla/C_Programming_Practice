#include <stdio.h>
#include <stdlib.h>
int digit_count(long long n) { int count=0; n=llabs(n); do { count++; n/=10; } while(n); return count; }
int main(void) { long long n; printf("Enter an integer: "); if(scanf("%lld",&n)!=1)return 1; printf("Number of digits = %d\n",digit_count(n)); return 0; }
