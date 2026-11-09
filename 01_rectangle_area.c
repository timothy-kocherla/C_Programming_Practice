#include <stdio.h>
int main(void) {
    double length, width;
    printf("Enter length and width: ");
    if (scanf("%lf %lf", &length, &width) != 2 || length < 0 || width < 0) {
        printf("Invalid input.\n"); return 1;
    }
    printf("Area = %.2f\n", length * width);
    return 0;
}
