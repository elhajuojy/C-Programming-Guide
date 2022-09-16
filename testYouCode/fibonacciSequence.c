#include <stdio.h>


int fabonaccci(int n )
{
     if (n==0)
     {
        return n=n+ 0;
     }
     else if (n==1)
     {
        n=n+ 1;
     }
     else{
        // printf(" n=  %d",n);
        n= fabonaccci(n-1) +fabonaccci(n-2);
     }
}

int main()
{

    int f ;
  printf("suite de fibonacci choose un number :");
  scanf("%d",&f);

  int res = fabonaccci(f);

  printf("res %d",res);




}