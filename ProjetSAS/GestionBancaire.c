#include <stdio.h>
#include <math.h>
#include <string.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include<windows.h>

//our Client
struct Client {
  char CIN[10];
  char Nom[20];
  char Prenom[20];
  double Montant;
}ClientList[1000];

int length = 0; 

void fidelisationFunc();
void rechercheparCIN(char cinClient[]){
    int found = 0;
    for (int i = 0; i < length; i++)
    {
        printf("i value is =>%d ----> %s=%s \n",i,ClientList[i].CIN,cinClient);
        if (strcmp(ClientList[i].CIN,cinClient)==0)
        {
            
            printf("🧑‍💻🧑‍💻 user information : by CIN =>%s 🤖🤖 \n",cinClient);
            printf(" %s =>%s => %s => %lf",ClientList[i].CIN,ClientList[i].Prenom,ClientList[i].Nom,ClientList[i].Montant);
            printf("\n");
            found = 1;
            break;
        }
        
    }
   
    if (found==0)
    {
        printf("the user does not exist");
    }
    
    
}

enum sort {ascending , descending}; 

void triAccount(enum sort sortwith);


void createAccount(int accountNbr){
    accountNbr==0? accountNbr=0 : printf("🧑‍🦰 => create accont %d \n",accountNbr);
    char cin[10];
    char nom[20];
    char prenom[20];
    double montant;
    struct Client c1 ;
    printf("veuillez entrer votre cin :");
        scanf("%s",&cin);
        strcpy(c1.CIN,cin);
        // printf("%s",c1.CIN);
        printf("veuillez entrer votre prenom : ");
        scanf("%s",&prenom);
        strcpy(c1.Prenom,prenom);
        // printf("%s",c1.Prenom);
        printf("veuillez entrer votre nom : ");
        scanf("%s",&nom);
        strcpy(c1.Nom,nom);
        // printf("%s",c1.Prenom);
        do
        {
            printf("veuillez entrer votre montant : ");
            scanf("%lf",&montant);
            
        } while (montant<0);
        printf("%lf",montant);
        c1.Montant=montant;
        printf("\n\n\n");
        //====================== 
        printf(" 🎁🎁 your account  is successfully created \n");
        printf("🧑‍💻🧑‍💻 user information : 🤖🤖 \n");
        ClientList[length] =c1;
        printf(" %s =>%s => %s => %lf",ClientList[length].CIN,ClientList[length].Prenom,ClientList[length].Nom,ClientList[length].Montant);
        printf("\n");
        length++;
}

int main(void){
    //menu principal
    int choice ;
    printf("\n");
    printf("🏦🏦Console bank 🏦🏦 \n");
    printf("1-Introduire un compte bancaire \n");
    printf("2-Introduire plusieurs comptes bancaires  \n");
    printf("3-Opérations \n");
    printf("4- Affichage \n" );
    printf("5- Fidélisation \n");
    printf("6- Quitter l'application \n");
    printf("entre votre choix :");
    scanf("%d",&choice);
    
    switch (choice)
    {
    case 1:
        printf("your choice is => 1\n");
        createAccount(0);
        printf("\n\n");
        int c = 0;
        while (c != 10)
        {
            printf("🔃🔃");
            c++;
            Sleep(1000);
        }

        printf("\n\n");
        main();
        break;
    case 2:
        printf("your choice is =>2\n");
        int nbrAccount;
        printf("combien de compte vous voulez créer :");
        scanf("%d",&nbrAccount);
        for (int i = 0; i < nbrAccount; i++)
        {
            createAccount(i+1);
        }
        printf("========");
        main();
        break;
    //Opérations :
    case 3:
        printf("your choice is =>3 \n");
        //Opérations :- Retrait  - Dépôt
        printf("veuillez choisir votre opération :\n");
        printf("\t 1-Retrait \n");
        printf("\t 2-Dépôt \n");
        int opp;
        //ask about the type of  operation he want to do 
        printf("=> ");
        scanf("%d",&opp);
        //! operation 
        if(opp==1){
                printf("Retrait");
                double montantRetrait;
                char cin[20];
                printf("s'il vous plait entrez votre cin :");
                scanf("%s",&cin);
                printf("s'il vous plait entrez votre montant : ");
                scanf("%lf",&montantRetrait);
                for (int j = 0; j < length; j++)
                {
                    if(strcmp(ClientList[j].CIN,cin)==0){
                        printf("the user is exsit in the database ");
                        if (ClientList[j].Montant<montantRetrait)
                        {
                            printf("vous n'avez pas assez d'argent sur votre compte");
                            break;
                        }
                        else{
                            ClientList[j].Montant = ClientList[j].Montant-montantRetrait;
                            printf(" ⁜⁜ l'opération a été affectée avec succès \n");
                            printf("\t votre sold est => 💴💴 %lf \n", ClientList[j].Montant);
                            break;
                        }
                        
                    }else{
                        printf("the user is doesn't  exsit in the database \n ");
                    }
                }
        }else if(opp==2)
        {
                printf("Dépôt");
                char cin[20];
                double montantDepot;
                printf("s'il vous plait entrez votre cin :");
                scanf("%s",&cin);
                printf("veuillez entrer combien d'argent vous voulez stocker :");
                printf("s'il vous plait entrez votre montant 'Depot': ");
                scanf("%lf",&montantDepot);
                //find the user which you want to add some money to his account 
                for (int j = 0; j < length; j++)
                {
                    if(strcmp(ClientList[j].CIN,cin)==0){
                        printf("the user is exsit in the database ");
                        ClientList[j].Montant += montantDepot;
                        printf(" ⁜⁜ l'opération a été affectée avec succès \n");
                        printf("\t votre sold est => 💴💴 %lf \n", ClientList[j].Montant);
                        break;
                    }else{
                        printf("the user is doesn't  exsit in the database ");
                    }
                }
        }else{
            printf("exit \n");
            main();
            Sleep(3000);      
        }
        break;
    // Affichage
    case 4:
        printf("your choice is =>4");
        // Par Ordre Ascendant
        // Par Ordre Descendant
        // Par Ordre Ascendant (les comptes bancaires ayant un montant supérieur à un chiffre introduit)
        // Par Ordre Descendant (les comptes bancaires ayant un montant supérieur à un chiffre introduit)
        // Recherche par CIN
        printf("Affichage :");
        printf("\n");
        printf("\t 1 - Par Ordre Ascendant");
        printf("\n");
        printf("\t 2 - Par Ordre Descendant");
        printf("\n");
        printf("\t 3 - Par Ordre Ascendant (les comptes bancaires ayant un montant supérieur à un chiffre introduit)");
        printf("\n");
        printf("\t 4 - Par Ordre Descendant (les comptes bancaires ayant un montant supérieur à un chiffre introduit)");
        printf("\n");
        printf("\t 5 - Recherche par CIN");
        printf("\n");
        printf("\t 6 - retourner");
        printf("\n");
        //* opp choice 
        char cinUser[10];
        int oppp;
        printf("=>");
        scanf("%d",&oppp);
        switch (oppp)
        {
        //
        case 1:
            printf("1\n");
            triAccount(ascending);
            break;
        case 2:
            printf("2\n");
            triAccount(descending);
            break;
        case 3:
            printf("3\n");
            break;
        case 4:
            printf("4\n");
            break;
        case 5:
            //Recherche par CIN
            printf("5\n");
            printf("please entre your cin \n");
            scanf("%s",cinUser);
            rechercheparCIN(cinUser);
            break;
        case 6:
            printf("6\n");
            main();
            break;
        default:
            printf("Nothing else");
            main();
            break;
        }
        break;
    //* end of case 4    
    //end of case 4 
    case 5:
        printf("your choice is =>5");
        fidelisationFunc();

        break;
    case 6:
        printf("your choice is =>6");
        exit(0);
        break;
    
    default:
        break;
    }
    
    main();
    return 0;
}

//account sort  function 
void triAccount(enum sort sortwith){
    sortwith==0?printf("asending \n"):printf("desnding \n");
        int posmin = 0;
        struct Client temp ;
    if (sortwith == 0)
    {   
            
            for (int j = 0; j < length; j++)
            {
                for (int i = 1; i < length; i++)
                {
                    if (ClientList[i].Montant<ClientList[i-1].Montant)
                    {
                        temp = ClientList[i];
                        ClientList[i] = ClientList[i-1];
                        ClientList[i-1] = temp;
                    }
                }
            }
            printf("============================================\n");
            for (int i = 0; i < length; i++)
            {

                printf(" %s => |%s| => 💴💴%lf \n",ClientList[i].Nom, ClientList[i].CIN,ClientList[i].Montant);
            }
            printf("============================================\n");
    }
    else{
        for (int j = 0; j < length; j++)
            {
                for (int i = 1; i < length; i++)
                {
                    if (ClientList[i].Montant>ClientList[i-1].Montant)
                    {
                        temp = ClientList[i];
                        ClientList[i] = ClientList[i-1];
                        ClientList[i-1] = temp;
                    }
                }
            }
            printf("============================================");
            for (int i = 0; i < length; i++)
            {

                printf(" %s => |%s| => 💴💴%lf \n",ClientList[i].Nom, ClientList[i].CIN,ClientList[i].Montant);
            }
            printf("============================================");

    }
    
}

///Fidélisation Ajouter 1.3% aux comptes ayant les 3 premiers montants supérieurs
void fidelisationFunc(){
     triAccount(descending);
     printf("=======================================\n");
     for (int i = 0; i < 3; i++)
     {
        ClientList[i].Montant = ClientList[i].Montant+ (ClientList[i].Montant*1.3)/100; 
     }
     printf("========================================\n");
     
    for (int i = 0; i < length; i++)
        {
            printf(" %s => |%s| => 💴💴%lf \n",ClientList[i].Nom, ClientList[i].CIN,ClientList[i].Montant);
        }
    printf("============================================\n");
}