#include <stdio.h>
#include <windows.h>

int main(void){


    int prog=10;
    int duration = 300;
    int i ;
    
    //todo need to make the counter beside the  # download prograsse 
    for (i = 0; i < prog; i++)
    {
        
        printf("#");
        Sleep(duration);  
    }

    printf("%i ",i);
    
}