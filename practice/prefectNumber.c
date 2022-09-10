#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main(){ 
    int x,sum;

    printf("please entre the number");
    scanf("%d",&x);
    sum =0;
    for(int i=1;i<x;i++){
        
        if(x%i==0){
            //ki9eblo 9issema 3ela x  
            printf("%d =>",i);
            sum=sum+i;
        }
    }

    if (x==sum)
    {
        printf("number est parfait %d =%d",sum,x);
    }else{
        printf("number est non parfait %d =%d",sum,x);

    }
    


    return 0;
}