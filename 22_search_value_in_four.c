#include <stdio.h>
int main(void) {
    int a[4],x,i,found=0;
    printf("Enter four integers: ");
    for(i=0;i<4;i++) if(scanf("%d",&a[i])!=1) return 1;
    printf("Enter value to search: "); if(scanf("%d",&x)!=1)return 1;
    for(i=0;i<4;i++) if(a[i]==x){printf("x is equal to input %d.\n",i+1);found=1;break;}
    if(!found) puts("Value not found.");
    return 0;
}
