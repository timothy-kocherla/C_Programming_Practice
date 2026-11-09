#include <stdio.h>
int main(void) {
    int a,b;
    printf("Enter two integers: ");
    if(scanf("%d%d",&a,&b)!=2) return 1;
    if(a>b) printf("Larger = %d\n",a);
    else if(b>a) printf("Larger = %d\n",b);
    else printf("Both numbers are equal.\n");
    return 0;
}
