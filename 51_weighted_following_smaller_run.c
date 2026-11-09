#include <stdio.h>
int main(void) {
    int n; long long sum=0; printf("Enter array size: "); if(scanf("%d",&n)!=1 || n<=0 || n>1000)return 1;
    int a[n]; for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    for(int i=0;i<n;i++){int count=0;for(int j=i+1;j<n && a[i]>a[j];j++)count++;sum+=(long long)a[i]*count;}
    printf("Result = %lld\n",sum); return 0;
}
