#include <stdio.h>
#include <stdlib.h>
int main(void) { long long n; printf("Enter an integer: "); if(scanf("%lld",&n)!=1)return 1; n=llabs(n); if(n<10){puts("The number has fewer than two digits.");return 0;} while(n>=100)n/=10; printf("Sum = %lld\n",n/10+n%10); return 0; }
