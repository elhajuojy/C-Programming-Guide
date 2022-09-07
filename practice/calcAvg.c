#include<stdio.h>

void main(){

    int len;
    double avg;
    int sum=0;

    printf("Please Entre the number element you want :");
    scanf("%d",&len);
    int elements[len];
    for (int i = 0; i < len; i++)
    {
        printf("please entre element %d : ",i+1);
        scanf("%d",&elements[i]);
        sum +=elements[i];

    }

    avg = sum/len;
    printf("avg is %lf",avg);
    
    // C Multidimensional Arrays

}