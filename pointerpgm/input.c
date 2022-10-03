#include <stdio.h>

char (*ptr)[20] ;
char input(){
    char name[20];
    ptr = &name;
    printf("Enter the string\n");
    scanf("%s",*ptr);
    return ptr;
}
int main(){
    unsigned long addr;
    addr = input();
    printf("%s",addr);
    return 0;
}