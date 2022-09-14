#include <stdio.h>
//varaibles global 
int table[] = {3,5,8,7,99,6,12,20,1};
int size = sizeof table / sizeof table[0];

void sort();
void binarySearch(int arry[],int low,int heghit,int key);

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
    binarySearch(table,start,end,n);
    return 0;
}

void binarySearch(int arry[],int low,int heghit,int key){

    int m = (low+heghit)/2;
    if (low>heghit)
    {
        printf("not found ");
    }
    else if(arry[m]==key)
    {
        printf("found ");
    }else if (arry[m]>key)
    {
        binarySearch(arry , low,m-1,key);
    }
    else if (arry[m]<key)
    {
        binarySearch(arry , m+1,heghit,key);
    }

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