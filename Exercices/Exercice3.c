#include <stdio.h>

int main(){
    //method 1
    int arr[10];
    arr[0]=1;
    arr[1]=2;
    arr[2]=3;
    arr[3]=4;
    arr[4]=5;
    arr[5]=6;
    arr[6]=7;
    arr[7]=8;
    arr[8]=9;
    arr[9]=10;


    int arr1[] = {1,2,3,4,5,6,7,8,9,0};
    int i ;
    for (i=0;i<10;i++){
        if(arr1[i]<=5){
        printf("%d \t ",arr1[i]);
        }
        
    }
    return 0;
}