#include <stdio.h>
int main(void) {
    int a,b,c;
    printf("Enter three integers (two should be equal): ");
    if(scanf("%d%d%d",&a,&b,&c)!=3) return 1;
    if(a==b) printf("Different number = %d\n",c);
    else if(a==c) printf("Different number = %d\n",b);
    else if(b==c) printf("Different number = %d\n",a);
    else puts("No two numbers are equal.");
    return 0;
}
