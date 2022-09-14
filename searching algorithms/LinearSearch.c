#include <stdio.h>


int main(){
    int table[]= {1,99,100,8,0,9,0};
    int size = sizeof table / sizeof table[0];
    int n ;
    int found = 0;
    printf("please entre one number :");
    scanf("%d",&n);
    for (int i = 0; i < size ; i++)
    {
        if (table[i]==n)
        {
            found = 1;
            break;
        }
        
        
    }
    found==0?printf("the number is not found "):
    printf("the number  is found %d ",n);


    return 0;
}