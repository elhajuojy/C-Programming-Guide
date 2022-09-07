#include <stdio.h>
//print start with pattern 
void printname(){
    for (int i = 0; i < 10; i++)
    {
        // printf("\n* \t");
         if(i==5){
                printf("\n*");
            }else{
                printf("* \t");
            }

        for (int j= 0; j < 10; j++)
        {
            
           printf("* \t");
        }
    }
    
}

void printInformation(int age,char name[]){
    printf("welcome %s and your age is %d",name,age);

};

void PrintNameWithShapeInTheConsole(char name[]){
    for (int i = 0; i < 10; i++)
    {

        for (int j = 0; j < 10; j++)
        {
            if(j==0||j==9){
                printf("*");
            }else if(i==5 && j==5){
                printf("%s",name);
                // printf("\t");
            }else if(i==0||i==9){
                for (int  n = 0; n < 8; n++)
                {
                    printf("*");
                }
                
            }
            else{
                printf("\t");
            }
        }
        
            printf("\n");
    }
    
}

int main(void){
    // printname();
    // char name[20]
    // printInformation(22,"mehdi elhjuojy");
    PrintNameWithShapeInTheConsole("mehdi    ");
    return 0 ;
}
