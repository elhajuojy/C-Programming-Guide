#include<stdio.h>

int main() {
    int i, j, numberOfRows, star ;
    printf("Please entre the number :");
    scanf("%d", &numberOfRows);

        for (i = 0; i < numberOfRows; i++) {

        for (j = 0; j < (numberOfRows - i ); j++) {
            printf(" ");
        }
        
        star=0;
        while (star <= i+1)
        {
            printf("*");
            star++;
        };

        star = 0;
        printf("\n");
    }
    return 0;
}