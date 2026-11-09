#include <stdio.h>
int main(void) {
    long long a,b,c,t;
    printf("Enter three positive side lengths: ");
    if(scanf("%lld%lld%lld",&a,&b,&c)!=3 || a<=0 || b<=0 || c<=0) return 1;
    if(a>b){t=a;a=b;b=t;} if(b>c){t=b;b=c;c=t;} if(a>b){t=a;a=b;b=t;}
    if(a*a+b*b==c*c) puts("The sides form a right-angled triangle.");
    else puts("The sides do not form a right-angled triangle.");
    return 0;
}
