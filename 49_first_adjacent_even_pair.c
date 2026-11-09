#include <stdio.h>
int main(void) {
    int n,found=0; printf("Enter array size: "); if(scanf("%d",&n)!=1 || n<2 || n>1000)return 1;
    int a[n]; for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    for(int i=0;i<n-1;i++)if(a[i]%2==0 && a[i+1]%2==0){printf("First adjacent even pair starts at position %d\n",i+1);found=1;break;}
    if(!found) puts("No adjacent even pair found.");
    return 0;
}
