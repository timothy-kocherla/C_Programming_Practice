#include <stdio.h>
void print_binary(unsigned int n){if(n>1)print_binary(n/2);putchar('0'+n%2);}
void process_line(void){int ch=getchar();if(ch==EOF||ch=='\n')return;process_line();if(ch>='0'&&ch<='9'){print_binary((unsigned int)(ch-'0'));putchar(' ');}}
int main(void){puts("Enter a line containing digits:");process_line();putchar('\n');return 0;}
