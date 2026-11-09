#include <stdio.h>
int main(void) {
    int n; long long product=1,sum=0;
    printf("Enter array size: "); if(scanf("%d",&n)!=1 || n<=0 || n>1000)return 1;
    int a[n]; for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    for(int i=0;i<n;i++){product*=a[i];sum+=product;}
    printf("Sum of prefix products = %lld\n",sum); return 0;
}
