#include <stdio.h>
int main(void) {
    int n,position=1; long long sum=0;
    printf("Enter integers (-1 to stop):\n");
    while(scanf("%d",&n)==1 && n!=-1) { sum+=(long long)position*n; position++; }
    printf("Weighted sum = %lld\n",sum); return 0;
}
