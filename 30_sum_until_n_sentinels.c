#include <stdio.h>
int main(void) {
    int target, n, sentinels=0; long long sum=0;
    printf("How many -1 sentinels should stop the input? ");
    if(scanf("%d",&target)!=1 || target<=0)return 1;
    printf("Enter integers:\n");
    while(sentinels<target && scanf("%d",&n)==1) {
        if(n==-1) sentinels++;
        else sum+=n;
    }
    printf("Sum = %lld\n",sum); return 0;
}
