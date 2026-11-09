#include <stdio.h>
int main(void) {
    int n,position=1; long long weighted_sum=0,weight_sum=0;
    printf("Enter integers (-1 to stop):\n");
    while(scanf("%d",&n)==1 && n!=-1) {
        if(n%2==0) { weighted_sum+=(long long)position*n; weight_sum+=position; }
        position++;
    }
    if(weight_sum==0) puts("No even values were entered.");
    else printf("Weighted average = %.2f\n",(double)weighted_sum/weight_sum);
    return 0;
}
