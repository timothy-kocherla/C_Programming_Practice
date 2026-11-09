#include <stdio.h>
#include <stdlib.h>
int main(void) { long long n; printf("Enter an integer: "); if(scanf("%lld",&n)!=1)return 1; n=llabs(n); do { int d=(int)(n%10); if(d%3==0){printf("Rightmost digit divisible by 3 = %d\n",d);return 0;} n/=10; } while(n); puts("No digit divisible by 3 was found."); return 0; }
