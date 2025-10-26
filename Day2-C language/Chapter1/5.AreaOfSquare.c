#include<stdio.h>
#include <math.h>
int main(void)
{
    int side;
    printf("Enter the side of the square");
    scanf("%d", &side);
    int area = pow(side,2);
    printf("%d", area);

}