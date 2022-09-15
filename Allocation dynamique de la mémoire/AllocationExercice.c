#include <stdio.h>
#include <stdlib.h>

int main(){
    int n ;
    printf("please entre the size of elements in your table");
    scanf("%d",&n);
    int *table = calloc(n,sizeof(int));
    if(table==NULL){
        printf("les memoire n'est pas allouee .\n");
        exit(0);
    }else
    {
         for (int i = 0; i < n; i++)
         {  
            int note;
            printf("entre element %d : ",i+1);
            scanf("%d",&note);
            *(table+i)= note;
         }
         int sum =0;
         for (int i = 0; i < n; i++)
         {  
            
           
             sum += *(table+i);
         }
         double avg = sum/n;
         printf("avg of the table is = %lf",avg);
    }
    
}