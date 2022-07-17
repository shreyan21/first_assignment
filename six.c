#include<stdio.h>
/* program to put users name in double quotes*/
int main()
{
    char a[40];
    gets(a);
    printf("\"Hello , %s\"",a);
}