#include <stdio.h>
#include <windows.h>
int main(void)
{
    int h,m,s;
    int d = 1000;
    printf("Type the time: ");
    scanf("%i%i%i", &h,&m,&s);
    if ( s > 60 || m > 60 || h > 12 )
    {
        printf("ERROR\n");
        exit(0);
    }
    while (1)
    {
        if( s > 59 )
        {
            s = 0;
            m++;
        }
        if( m > 59 )
        {
            m = 0;
            h++;
        }
        if( h > 12 )
        {
            h = 1;
        }
        printf("\nClock : ");
        printf("%02i:%02i:%02i", h,m,s);
        Sleep(d);
        s++;
        system("cls");
        
    }
    

}