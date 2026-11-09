#include <stdio.h>
int main(void) {
    int n; long long product=1;
    printf("Enter array size (at least 2): ");
    if(scanf("%d",&n)!=1 || n<2 || n>1000)return 1;
    int a[n]; printf("Enter %d integers:\n",n);
    for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    for(int i=0;i<n-1;i++)product*=((long long)a[i]+a[i+1]);
    printf("Product of adjacent-pair sums = %lld\n",product); return 0;
}
