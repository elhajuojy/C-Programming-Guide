#include <stdio.h>


// selection sort;
int main(void){
    int table[] = {3,5,8,7,99,6,12,20,1};
    int size = sizeof table / sizeof table[0];
    int posmin = 0;
    int valueofIndex = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (table[j]<table[posmin])
            {
                posmin= j;
            }
            
        }
        
        valueofIndex = table[i];
        table[i] = table[posmin];
        table[posmin] = valueofIndex;
    }
    for (int i = 0; i < size; i++)
    {
        printf("|%d|",table[i]);
    }
    
    
}