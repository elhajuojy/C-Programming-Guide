#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(void){

    char name[20];

    printf("please entre a name :");
    scanf("%s",name);    
    printf("HI , %s",toupper(name));
}