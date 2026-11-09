#include <stdio.h>
int main(void) {
    double a,b,c,x;
    printf("Enter a, b, c and x: ");
    if (scanf("%lf %lf %lf %lf", &a,&b,&c,&x) != 4) return 1;
    printf("f(%.2f) = %.2f\n", x, a*x*x+b*x+c);
    return 0;
}
