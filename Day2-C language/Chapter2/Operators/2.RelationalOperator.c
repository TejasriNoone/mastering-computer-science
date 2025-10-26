#include <stdio.h>
int main(void)
{
    int a , b ;
    printf("Enter the values of a and b : ");
    scanf("%d%d",&a,&b);
    if(a > b ){
        printf("a is greater than b");
    }
    else if(a < b){
        printf("a is lesser than b");
    }
    else if( a >= b){
        printf("a is greater than or equal to b");
    }
     else if( a == b){
        printf("a is equal to b");
    }
     else {
        printf("a is not equal to b");
    }
   

}