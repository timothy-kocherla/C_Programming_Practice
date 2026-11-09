#include <stdio.h>
int main(void) {
    int i=2,j=3,k,l; float a,b;
    k=i/j*j; l=j/i*i; a=i/j*j; b=j/i*i;
    printf("k = %d\nl = %d\na = %.2f\nb = %.2f\n",k,l,a,b);
    return 0;
}
