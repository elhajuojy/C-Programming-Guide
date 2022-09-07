#include <stdio.h>

int main(){
    //simple pointer 
    // int a =3;
    // printf("%d \n",&a);
    // int *b =&a;
    // printf("%d",*b);

    int a =2;
    printf("a=%d\n",a);
    int *p;
    p = &a;
    int *p1;
    p1=&a;
    printf("la valeur de *p   %d \n",*p);
    printf("la value de *p1 =  %d\n",*p1); 

    //we change a because *p 
    *p=85;
    printf("la valeur de *p   %d \n",*p);
    printf("la value de *p1 =  %d\n",*p1);


    // --
    printf("la valeur de a  =  %d\n",a);
    printf("la valeur de &a =  %d\n",&a);
    // --
    printf("la valeur de *p =  %d\n",*p);
    printf("la valeur de p  = %d\n",p);
    printf("la valeur de &p =  %d\n",&p);
    // ---
    printf("la value de &p1 =  %d\n",&p1);
    printf("la value de p1 =  %d\n",p1);
    printf("la value de *p1 =  %d\n",*p1);

    



    return 0;


}