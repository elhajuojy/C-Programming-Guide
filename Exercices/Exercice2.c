#include <stdio.h>

int main(){
    int  num ,num2;
    printf("please entre a number");

    if(num%num2==0){
    printf("the number is odd");
    }
    else{
        printf("the number is  even");
    }

    scanf("%d",&num);
     if (num % 4 == 0){
        printf("the number is multiple by 4");
    }
    else if(num % 2 != 0){
        printf("the number is odd");
    }
    
    else{
        printf("the number is  even");
    }
    getchar();
    return 0;

}