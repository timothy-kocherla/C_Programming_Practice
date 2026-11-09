#include <stdio.h>
int main(void) {
    int digit; long long value=0;
    printf("Enter digits 0-9 (-1 to stop):\n");
    while(scanf("%d",&digit)==1 && digit!=-1) {
        if(digit<0 || digit>9) { puts("Only digits 0-9 are allowed."); return 1; }
        value=value*10+digit;
    }
    printf("Number = %lld\n",value);
    printf("Double = %lld\n",2*value); return 0;
}
