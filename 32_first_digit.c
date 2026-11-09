#include <stdio.h>
#include <stdlib.h>
int first_digit(long long n) { n=llabs(n); while(n>=10)n/=10; return (int)n; }
int main(void) { long long n; printf("Enter an integer: "); if(scanf("%lld",&n)!=1)return 1; printf("First digit = %d\n",first_digit(n)); return 0; }
