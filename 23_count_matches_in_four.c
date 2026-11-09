#include <stdio.h>
int main(void) {
    int a[4],x,i,count=0;
    printf("Enter four integers: ");
    for(i=0;i<4;i++) if(scanf("%d",&a[i])!=1)return 1;
    printf("Enter comparison value: "); if(scanf("%d",&x)!=1)return 1;
    for(i=0;i<4;i++) if(a[i]==x)count++;
    printf("Number of matches = %d\n",count); return 0;
}
