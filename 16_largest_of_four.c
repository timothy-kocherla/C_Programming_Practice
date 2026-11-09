#include <stdio.h>
int main(void) {
    double a,b,c,d,m;
    printf("Enter four numbers: ");
    if(scanf("%lf%lf%lf%lf",&a,&b,&c,&d)!=4) return 1;
    m=a; if(b>m)m=b; if(c>m)m=c; if(d>m)m=d;
    printf("Largest = %.2f\n",m); return 0;
}
