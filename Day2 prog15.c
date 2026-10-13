/* Convert Uppercase to Lowercase */
#include<stdio.h>
int main()
{
    char c, a;
    printf("Enter a character: ");
    scanf("%c", &c);
    a = c +32; // Convert uppercase to lowercase
    printf("Lowercase character: %c\n", a); 
    return 0;
}