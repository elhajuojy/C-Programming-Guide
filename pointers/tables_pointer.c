#include <stdio.h>

int main(){
    int T[5] = {3,-6,14,8,24};
    int *p ;
    p=T ;
    printf("%d",T[0]);
    //output is 3  
    printf("%d",*p); 
    //output is 3 

    p++;
    printf("%d",*p);
    //output is -6
    p=p+3;
    
     

}