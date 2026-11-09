#include <stdio.h>
#include <stdlib.h>
int main(void) { long long n; printf("Enter an integer: "); if(scanf("%lld",&n)!=1)return 1; n=llabs(n); do { int d=(int)(n%10); if(d%2==0){printf("Rightmost even digit = %d\n",d);return 0;} n/=10; } while(n); return 0; }
