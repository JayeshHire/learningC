#include <stdio.h>
#include <string.h>
int main(){
    struct student {
        int roll;
        char name[10];
    } st[10];
    printf("enter your name\n");
    gets(st[1].name);
    printf("%s",st[1].name);
    printf("hello world");
    return 0;
}