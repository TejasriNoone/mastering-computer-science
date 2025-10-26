#include <stdio.h>
int main(void){
    printf("Enter the values of a and b : ");
    int a , b;
    scanf("%d%d", &a, &b);
    if( a > b && a < b){
        printf( "not possible");
    }
    else if( a < b || a > b){
        printf("possible");
    }
    else{
        printf("a is not equal to b");
    }


}