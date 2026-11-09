#include <stdio.h>
#include <stdlib.h>
int largest_digit(long long n) { int max=0; n=llabs(n); do { int d=(int)(n%10); if(d>max)max=d; n/=10; } while(n); return max; }
int main(void) { long long n; printf("Enter an integer: "); if(scanf("%lld",&n)!=1)return 1; printf("Largest digit = %d\n",largest_digit(n)); return 0; }
