#include <stdio.h>
void read_and_print(int position) {
    int ch=getchar();
    if(ch==EOF || ch=='\n') return;
    read_and_print(position+1);
    if(position%2==0) putchar(ch);
}
int main(void){puts("Enter a line:");read_and_print(1);putchar('\n');return 0;}
