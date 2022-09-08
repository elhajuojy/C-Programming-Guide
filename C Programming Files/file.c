#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int main(){
    
    FILE* fptr;
    FILE* fptr1;
    //modes :r=> read
    fptr = fopen("youcode.txt","r");
    fptr1 = fopen("youcode1.txt","w");

    char content [1000];

    if(fptr !=NULL){
        // printf("File Open Successful");
        // read file content
        fgets(content,1000,fptr);
        printf("==> %s",content);
    }else{
        printf("File Open Unsuccessful");
    }
    

    //write into file 
    //* if the file doesn't exist"s it will be created

    fputs("I love c Progamming\n",fptr1);
    fputs("C progamming series by elhjuojy is the best",fptr1);

    
    

    fclose(fptr1);
    fclose(fptr);
    return 0;
}

