#include <stdio.h>
int main(void)
{
    int a ;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    a += 10;
    printf("%d\n", a);
    a -= 10;
    printf("%d\n", a);
    a *= 10;
    printf("%d\n", a);
    a /= 10;
    printf("%d\n", a);
    a %= 10;
    printf("%d\n", a);
}