#include <stdio.h>
#include <math.h>
int main(void) {
    double a,b,c,d;
    printf("Enter a, b and c: ");
    if(scanf("%lf%lf%lf",&a,&b,&c)!=3 || a==0) {
        puts("Invalid input: a must be non-zero."); return 1;
    }
    d=b*b-4*a*c;
    if(d>0) printf("Roots = %.6f and %.6f\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
    else if(d==0) printf("Repeated root = %.6f\n",-b/(2*a));
    else printf("Roots = %.6f + %.6fi and %.6f - %.6fi\n",-b/(2*a),sqrt(-d)/(2*a),-b/(2*a),sqrt(-d)/(2*a));
    return 0;
}
