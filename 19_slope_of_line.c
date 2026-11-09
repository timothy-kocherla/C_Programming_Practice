#include <stdio.h>
int main(void) {
    double a,b,c;
    printf("Enter a, b and c: ");
    if(scanf("%lf%lf%lf",&a,&b,&c)!=3) return 1;
    if(b==0) puts("The line is vertical; slope is undefined.");
    else { printf("Slope = %.4f\n",-a/b);
        if(a==0) puts("The line is horizontal.");
        else puts("The line is neither horizontal nor vertical.");
    }
    return 0;
}
