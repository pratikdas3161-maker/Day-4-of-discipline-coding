/* Size of Data Types */
#include<stdio.h>
int main()
{
    int a, b;
    float c;
    double d;
    char e;
    a = sizeof(b);
    printf("Size of int: %d bytes\n", a);
    a = sizeof(c);
    printf("Size of float: %d bytes\n", a);
    a = sizeof(d);
    printf("Size of double: %d bytes\n", a);
    a = sizeof(e);
    printf("Size of char: %d bytes\n", a);
    return 0;
}