#include <stdio.h>

void printname(){
    for (int i = 0; i < 10; i++)
    {
        // printf("\n* \t");
         if(i==5){
                printf("\nM \t");
            }else{
                printf("* \t");
            }

        for (int j= 0; j < 10; j++)
        {
            
           printf("* \t");
        }
    }
    
}

int main(void){
    printname();
    // char name[20]

}
