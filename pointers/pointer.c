#include <stdio.h>

int main(){
    //simple pointer 
    int a =3;
    printf("%d \n",&a);
    int *b =&a;
    printf("%d",*b);
}