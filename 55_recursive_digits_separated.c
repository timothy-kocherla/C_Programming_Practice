#include <stdio.h>
void print_digits(void) {
    int ch=getchar();
    if(ch==EOF || ch=='\n') return;
    print_digits();
    if(ch>='0' && ch<='9') printf("%c ",ch);
}
int main(void){puts("Enter a line:");print_digits();putchar('\n');return 0;}
