#include <stdio.h>
int main(void) {
    double side;
    printf("Enter side length: ");
    if(scanf("%lf",&side)!=1 || side<0) return 1;
    printf("Area = %.2f\n",side*side);
    return 0;
}
