#include <stdio.h>
#include <stdlib.h>
int main(void) { long long n; int count=0; printf("Enter an integer: "); if(scanf("%lld",&n)!=1)return 1; n=llabs(n); do { count++; n/=10; } while(n); printf("Number of digits = %d\n",count); return 0; }
