#include <stdio.h>
int main(void) {
    int n,found=0; printf("Enter array size (at least 3): ");
    if(scanf("%d",&n)!=1 || n<3 || n>1000)return 1;
    int a[n]; for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;
    for(int i=1;i<n-1;i++)if(a[i]>a[i-1] && a[i]>a[i+1]){printf("%d ",a[i]);found=1;}
    if(!found)puts("No local maxima found."); else putchar('\n');
    return 0;
}
