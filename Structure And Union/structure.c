#include  <stdio.h>
#include <string.h>

struct Client {
  char Id[20];
  char name[20];
  int accountNumber;
  int sold;

}ClientList[19];

int main(){
    

    struct Client c1,c2;

    strcpy(c1.Id,"HH197878");
    strcpy(c1.name, "George Orwell");
    c1.sold=400;
    c1.accountNumber=111;
    printf("%s",c2.Id);
    //output => HH197878

    //client 2
    strcpy(c2.Id,"HH9798");
    strcpy(c2.name, "abdelillah elasri");
    c2.sold=5000;
    c2.accountNumber=222;

    printf("%s",c2.name);
    //output => abdelillah elasri

    

    //add the client ot the list 
    ClientList[0]=c1;
    ClientList[1]=c2;
    return 0;
}