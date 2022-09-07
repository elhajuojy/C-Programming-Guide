#include <stdio.h> 
#include <string.h> 
int main(void){
    char op[5] ;
    int a,b;

    printf("please entre the first number");
    scanf("%d",&a);
    printf("please entre the second number");
    scanf("%d",&b);

    printf("chose your operator : ");
    scanf("%s",&op);   
    //
    if (strcmp(op, "+") == 0)
    {
        printf("%d",a+b);
    }
    else if(strcmp(op, "-") == 0){
        printf("%d",a-b);

    }
    else if(strcmp(op, "*") == 0){
        printf("%d",a*b);

    }else if(strcmp(op, "/") == 0){
        printf("%d",a/b);

    }
    else{
        printf("nothing else");
    }
    

}

