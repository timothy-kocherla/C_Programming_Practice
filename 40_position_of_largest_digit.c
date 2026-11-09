#include <stdio.h>
#include <stdlib.h>
int main(void) { long long n; int pos=0,bestpos=1,max=-1; printf("Enter an integer: "); if(scanf("%lld",&n)!=1)return 1; n=llabs(n); do { int d=(int)(n%10); pos++; if(d>max){max=d;bestpos=pos;} n/=10; } while(n); printf("Largest digit is %d at position %d from the right.\n",max,bestpos); return 0; }
