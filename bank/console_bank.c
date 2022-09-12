#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


void createAcounnt();
void loginTotheAccount();
int menu();
int isTheNumberAlreadyExist();


struct Client {
  char Id[10];
  char firstname[20];
  char lastname[20];
  int accountNumber;
  double balance;
  int password;

}ClientList[100];


int main(void){
    srand(time(NULL)); 
    int choice ;
    int randomNumber = rand();
    

    int lastIndexOfLlist = 0;
    printf("🏦🏦 ***CONSOLE BANK*** 🏦🏦 \n\n");
    //creating acount,
    
    //ask for the choice 
    choice = menu();
    printf("the choice = %d ",choice);
    //

    while (choice==1 ||choice==2)
    {
        printf("am in the while loop the choice is %d \n",choice);
        if (choice==1)
        {   
            //here you must make the user create an account ;
            printf("🧾🧾\t create account  \t🧾🧾 \n");
            struct Client c1;
            char id[10];
            char firsname[20];
            char lastname[20];
            double balance;
            //ask about information
            printf("Please Entre your national id : ");
            scanf("%s",&id);
            strcpy(c1.Id,id);
            //firstname
            printf("Please Entre your firstname : ");
            scanf("%s",&firsname);
            strcpy(c1.firstname, firsname);
            // lastname
            printf("Please Entre your lastname : ");
            scanf("%s",&lastname);
            strcpy(c1.lastname,lastname);
            //balance
            printf("Please Entre your balance : ");
            scanf("%lf",&balance);
            c1.balance=balance;

            int isTheUserExsit = 0;
            // printf("=========== in prosess");
            for (int i = 0; i < 10; i++)
            {
                printf("%d",i);
                if(strcmp(c1.Id,ClientList[i].Id)==0){
                    printf("this id is already being used.");
                    isTheUserExsit = 1;
                    break;
                }
                
            }
            c1.accountNumber=randomNumber;
            c1.password=randomNumber;
            ClientList[lastIndexOfLlist]=c1;
            printf("your account  is successfully created \n");
            printf("🧑‍💻🧑‍💻 user information : 🤖🤖 \n");
            printf("firstname => %s || lastname => %s || id =>  %s || accountNumber => %s || password => %s || balance => %s",c1.firstname,c1.lastname,c1.Id,c1.accountNumber,c1.password,c1.balance);
            choice= menu();



        }
        //* end of if 
        else 
        {
            printf("login to the account \n");
        } 
        
    }
    return 0;
}

int isTheNumberAlreadyExist(int theNumber){
    for (int i = 0; i < 10; i++)
            {
                if(theNumber,ClientList[i].accountNumber==0){
                    return 1;
                }
            }
    return 0;

};



int menu(){
    int n ;
    printf("====================== \n");
    printf("1-Create acount \n");
    //login to the account
    printf("2-login to the acount \n");
    //exit the app
    printf("3-Exit \n");
    printf("====================== \n");
    printf("please choose your choice : ");
    return scanf("%d",&n);
}

