#include <stdio.h>
//varaibles global 
int table[] = {3,5,8,7,99,6,12,20,1};
int size = sizeof table / sizeof table[0];

void sort();

int main(){
    sort();
    for (int i = 0; i < size; i++)
    {
        printf("|%d|",table[i]);
    }

    printf("\n");
    int n = 0;
    int start =0;
    int end = size;
    printf("please entre one number :");
    scanf("%d",&n);
    int CenterOfTheTable = 0 ;
    while (table[CenterOfTheTable] != n)
    {
        CenterOfTheTable  = end/2 ;
        if (n ==table[CenterOfTheTable])
        {   
            printf("success find the number %d ",table[CenterOfTheTable]);

        }
        else if (table[CenterOfTheTable]>n)
        {
            end = CenterOfTheTable;

        }
        else
        {
            start = end;
            end = CenterOfTheTable;
        }
    }
    
    return 0;
}

//bubble sort 
void sort(){
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
}