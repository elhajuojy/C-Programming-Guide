#include <stdio.h>

void draw(int n);

void main(){
    
    int heghit ;
    printf("pleasse entre the heghit ");
    scanf("%d",&heghit);
    draw(heghit);
}

void draw(int n ){
    if (n<=0)
    {
        return ;
    }
    
    draw(n-1);

    for (int i = 0; i < n ; i++)
    {   
        printf("🎒");
    }

    printf("\n");
}