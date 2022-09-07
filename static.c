#include <stdio.h>
void display();

int main()
{
    display();
    display();
}

//The value of a static variable persists until the end of the program.
void display()
{
    static int c = 1;
    c += 5;
    printf("%d  ",c);
}
