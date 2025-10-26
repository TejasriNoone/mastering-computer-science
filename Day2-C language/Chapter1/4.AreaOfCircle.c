#include <stdio.h>
int main(void){
    float const PI = 3.14;
    float radius;
    printf("Enter the radius of circle: ");
    scanf("%f" , &radius);
    float area = PI * radius * radius ;
    printf("%f", area);
}