#include <stdio.h>
int main(void) {
    int a,b,c,m;
    printf("Enter three integers: ");
    if(scanf("%d%d%d",&a,&b,&c)!=3)return 1;
    if((a>=b && a<=c)||(a<=b && a>=c))m=a;
    else if((b>=a && b<=c)||(b<=a && b>=c))m=b;
    else m=c;
    printf("Middle value = %d\n",m); return 0;
}
