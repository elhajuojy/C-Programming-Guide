#include <stdio.h>
int main(){

    //Variables 
    int playerScore = 95;

    // change value of varaible 
    char ch = 'a';
    // some code
    ch = 'l';

    // Literals
    int age = 22;
    float pi = 3.14; 
    double note =17.55;
    char name[] = "Mehdi";

    //constants 
    const int age = 22;

    short a;
    long b;
    long long c;
    long double d;

    printf("size of short = %d bytes\n", sizeof(a));
    printf("size of long = %d bytes\n", sizeof(b));
    printf("size of long long = %d bytes\n", sizeof(c));
    printf("size of long double= %d bytes\n", sizeof(d));
    
    // C Input Output (I/O)
    int testInteger = 5;
    printf("Number = %d", testInteger);
    char chr = 'a';    
    printf("character = %c", chr);  


    
    return 0;

}