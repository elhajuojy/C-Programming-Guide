#include <stdio.h>

void maxnumber();

//apple par refercnes

int main(){
    int a,b ,max;

    printf("Veuillez saisir la valeur de a :");
    scanf("%d",&a);
    printf("Veuillez saisir la valeur de b :");
    scanf("%d",&b);
    maxnumber(&a,&b,&max);
    printf("le maximum des deux valeurs est : %d",max);
    return 0;

}

void maxnumber(int *x,int *y, int *m){

    if(*x>*y){
        *m = *x;
    }else{
        *m = *y;
    }



}