#include <stdio.h>


// selection sort;
int main(void){
    int table[] = {3,5,8,7,99,6,12,20,1};
    int size = sizeof table / sizeof table[0];
    int temp ;

    for (int j = 0; j < size; j++)
    {
        for (int i = 1; i < size; i++)
        {
            if (table[i]<table[i-1])
            {
                temp = table[i];
                table[i] = table[i-1];
                table[i-1] = temp;
            }
        }
    }
    //sorting 
    for (int i = 0; i < size; i++)
    {
        printf("|%d|",table[i]);
    }
    
    
}