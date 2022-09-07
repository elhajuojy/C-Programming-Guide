#include <stdio.h>
#include <string.h>


// #define money 4000;
void sendMoney();
int showSold();
void showClientInformation();

int accountnumber1, accountnumber2;
int account1Sold ,account2Sold ;

struct Client {
  char Id[20];
  char name[20];
  int accountNumber;
  int sold;

}ClientList[19];


int main(void){
    // account1Sold=4000;
    // account2Sold=4000;

    // accountnumber1=1;
    // accountnumber2=2;
    // struct Client c1,c1;

    //client 2
    struct Client c1,c2;

    strcpy(c1.Id,"HH197878");
    strcpy(c1.name, "George Orwell");
    c1.sold=400;
    c1.accountNumber=111;
    

    //client 2
    strcpy(c2.Id,"HH9798");
    strcpy(c2.name, "abdelillah elasri");
    c2.sold=5000;
    c2.accountNumber=222;

    //add the client ot the list 
    ClientList[0]=c1;
    ClientList[1]=c2;

    showClientInformation();


    // int sold =  showSold(929);
    // sendMoney(2,1,400);
    // printf("%d",showSold(1));



}

//struct 
void showClientInformation(){
    for (int i = 0; i <2; i++)
    {
        printf("===================================== \n");
        printf("=> %s \n",ClientList[i].name);
        printf("=> %s \n",ClientList[i].Id);
        printf("=> %d \n",ClientList[i].accountNumber);
        printf("=> %d \n",ClientList[i].sold);
        printf("===================================== \n");
    }
    
}


void sendMoney(int fromAccoutnumber,int accountNumber,int money){
    if(fromAccoutnumber==accountnumber1){
        account1Sold = account1Sold-money;
        account2Sold += money;
        printf("account 1 sent money to account 2 ");
    }
    else{
        account2Sold = account2Sold-money;
        account1Sold += money;
        printf("account 2 sent money to account 1 ");
    }
    


}

int showSold(int accountnumber1s){
    if (accountnumber1s==accountnumber1)
    {
        printf("=> account 1 => £ ");
        return account1Sold;
    }else{
        printf("=> account 2=> £ ");
        return account2Sold;
    }
    
}