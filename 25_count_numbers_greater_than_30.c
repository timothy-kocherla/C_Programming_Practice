#include <stdio.h>
int main(void) {
    int n,count=0;
    printf("Enter integers (-1 to stop):\n");
    while(scanf("%d",&n)==1 && n!=-1) if(n>30) count++;
    printf("Count greater than 30 = %d\n",count); return 0;
}
