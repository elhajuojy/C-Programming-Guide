#include <stdio.h>
#include <math.h>
#include <string.h>

void createAcounnt();
void loginTotheAccount();
int menu();

struct Client {
  char Id[10];
  char firstname[20];
  char lastname[20];
  int accountNumber;
  double balance;
  char password[20];

}ClientList[100];

int choice ;

int main(void){


    int lastIndexOfLlist = 0;
    printf("🏦🏦 ***CONSOLE BANK*** 🏦🏦 \n\n");
    //creating acount,
    
    //ask for the choice 
    choice = menu();
    //
    do
    {
        if (choice==1)
        {
        //here you must make the user create an account ;
        printf("🫠🫠create account 🧾🧾 \n");
        struct Client c1;
        char id[10];
        char firsname[20];
        char lastname[20];
        printf("Please Entre your national id : ");
        scanf("%s",id);
        strcpy(c1.Id,id);
        printf("Please Entre your firstname : ");
        scanf("%s",firsname);
        strcpy(c1.firstname, firsname);
        printf("Please Entre your lastname : ");
        scanf("%s",lastname);
        strcpy(c1.lastname, lastname);


        for (int i = 0; i < 10; i++)
        {
            if(strcmp(c1.Id,ClientList[i].Id)==0){
                printf("this id is already being used.");
            }
            else{
                ClientList[lastIndexOfLlist]=c1;
                lastIndexOfLlist++;
                printf("your account  is successfully created \n");
                choice= menu();
            }
        }
        }else if (choice==2)
        {
        printf("create account \n");
        } 
        
        
    } while (choice==1 || choice==2);





    return 0;
}




int menu(){
    printf("====================== \n");
    printf("1-Create acount \n");
    //login to the account
    printf("2-login to the acount \n");
    //exit the app
    printf("3-Exit \n");
    printf("====================== \n");
    printf("please choose your choice : ");
    return scanf("%d",&choice);
}
