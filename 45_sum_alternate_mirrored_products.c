#include <stdio.h>
int main(void) {
    int n; long long sum=0;
    printf("Enter array size: "); if(scanf("%d",&n)!=1 || n<=0 || n>1000)return 1;
    int a[n]; for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    for(int i=0, right=n-1;i<n;i+=2, right--) sum+=(long long)a[i]*a[right];
    printf("Sum = %lld\n",sum); return 0;
}
