#include <stdio.h>
#include <stdlib.h>
int second_digit(long long n) { n=llabs(n); if(n<10)return -1; while(n>=100)n/=10; return (int)(n%10); }
int main(void) { long long n; printf("Enter an integer: "); if(scanf("%lld",&n)!=1)return 1; int d=second_digit(n); if(d<0)puts("The number has fewer than two digits."); else printf("Second digit = %d\n",d); return 0; }
