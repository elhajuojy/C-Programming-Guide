#include <stdio.h>

//insertion sort 
int main(void){
    int table[] = {3,5,8,7,99,6,12,20,1};

    int size = sizeof table / sizeof table[0];
    int min= 0;
    int max= 0;
    for (int i = 0; i <size ; i++)
    {   
        min = i;
        for (int j = i+1; j < size; j++)
        {
            if(table[i]>table[j]){
                max = table[i];
                min = table[j];
                table[j] = max;
                table[i] = min; 
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        printf("|%d|",table[i]);
    }
    
    
}