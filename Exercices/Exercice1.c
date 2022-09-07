#include <stdio.h>

int main(){
    char name[20];
    printf("S'il vous plaît entrez votre nom \n");
    scanf("%s",&name);
    // int year=2022;
    int age ;
    printf("please enter your age ");
    scanf("%d",&age);
    int res = 2022-age +100;
    printf("you will reach the 100 age in %d , mr %s",res,name);

    





    getchar();
    return 0;


}