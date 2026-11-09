#include <stdio.h>
void print_binary(unsigned int n){if(n>1)print_binary(n/2);putchar('0'+n%2);}
int main(void){unsigned int n;printf("Enter a non-negative integer: ");if(scanf("%u",&n)!=1)return 1;print_binary(n);putchar('\n');return 0;}
