#include <stdio.h>

int main(void){
    int i=10;

    // for (i = 1; i < 11; ++i)
    // {
    //     printf("%d ", i);
    // }

    // int num, count, sum = 0;

    // printf("Enter a positive integer: ");
    // scanf("%d", &num);

    // for loop terminates when num is less than count
    // for(count = 1; count <= num; ++count)
    // {
    //     sum += count;
    // }

    // printf("Sum = %d", sum);

    while (i <= 5) {
        printf("%d\n", i);
        if(i==3){
            continue;
        }
        if(i==5){
            break;
        }
        ++i;
    }

}