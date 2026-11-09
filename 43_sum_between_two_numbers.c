#include <stdio.h>
int main(void) { long long a,b,sum=0,t; printf("Enter two integers: "); if(scanf("%lld%lld",&a,&b)!=2)return 1; if(a>b){t=a;a=b;b=t;} for(long long i=a+1;i<b;i++)sum+=i; printf("Sum of integers strictly between them = %lld\n",sum); return 0; }
