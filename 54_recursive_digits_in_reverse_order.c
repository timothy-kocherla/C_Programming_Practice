#include <stdio.h>
void print_digits_reverse(void) {
    int ch=getchar();
    if(ch==EOF || ch=='\n') return;
    print_digits_reverse();
    if(ch>='0' && ch<='9') putchar(ch);
}
int main(void){puts("Enter a line:");print_digits_reverse();putchar('\n');return 0;}
