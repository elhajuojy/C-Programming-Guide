#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// date struct

typedef struct
{
    int jour;
    int mois;
    int annee;

} dateNais;

// studant struct

typedef struct
{
    char *nom;
    char *prenom;
    dateNais *date;

} StudentsStruct;

int numStudents = 0;
StudentsStruct *students;

enum sort {ascending , descending}; 

void triEtudiant(enum sort sortwith);

int countAge(dateNais userdateNais){
  time_t currentTime ;
  char *currentTimeInString;
  
  currentTime = time(NULL);
  

}

int avgAge(){
   //sum 
   printf("avg age function strat \n");
   
   
   int sum ;
   for (int i = 0; i < numStudents; i++)
   {
   
        int age =students[i].date->annee;
        printf("%d",age);
        sum += age;
   }
   
   int avgAge = sum/numStudents;
   
   return avgAge-2022;
  
}


//AJouter etudiant
int AjouterEtudiant(int nbrEtudiant)
{
    students = realloc(students, numStudents + nbrEtudiant);
    if (students == NULL)
    {
        printf("there no space enough ");
    }
    else
    {
        for (int x = numStudents; x < numStudents + nbrEtudiant; x++)
        {
            students[x].nom = (char *)malloc(sizeof(char *));
            students[x].prenom = (char *)malloc(sizeof(char *));
            students[x].date = (dateNais *)malloc(sizeof(dateNais *));
            printf("Ajouter un Etudiant  %d  \n",x);
            printf("Enter votre nom :");
            scanf("%s", students[x].nom);

            printf("Enter votre prenom :");
            scanf("%s", students[x].prenom);
            printf("Enter votre age number  :");
            printf(" => jour :");
            scanf("%d", &students[x].date->jour);
            printf(" => mois :");
            scanf("%d", &students[x].date->mois);
            printf(" => annee :");
            scanf("%d", &students[x].date->annee);
            printf("@@ Done @@");
            printf("\n");
        }
    }
    printf("\n");
    numStudents += nbrEtudiant;
}
//affiche etudiant
void printEdutaint(int pos){
    printf("start printing======");
    printf("\n");
    printf("nom : %s, prenom : %s, date de nassaine :  %i/%i/%i,",
        students[pos].nom,students[pos].prenom, students[pos].date->jour, students[pos].date->mois, students[pos].date->annee);
    printf("\n");
    printf("end printing====== \n");
}

int main()
{

    students = malloc(numStudents * sizeof *students);

    printf("=================Gestion Classe=================\n");
    printf("=                                              =\n");
    printf("=              1-Ajouter un Etudiant           =\n");
    printf("=           2-Ajouter plusieur etudiant        =\n");
    printf("=             3-tri par age(ASC/DESC)          =\n");
    printf("=                 4-statistque                 =\n");
    printf("=                                              =\n");
    printf("================================================\n");
    
    int choice;
    printf("votre choix :");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        
        AjouterEtudiant(1);
        //TODO : 1 in is not working 
        printEdutaint(1);
        main();
        break;
    case 2:
    
        printf(" combien de compte voulez-vous creer :");
        int n ;
        scanf("%d",&n);
        //ajouter Etudiant function take n as number of how many account will be created 
        AjouterEtudiant(n);
        for (int i = numStudents-n; i <numStudents ; i++)
        {
            printEdutaint(i);
            
        }
    
        main();
        
        break;
    case 3:
        printf("\t 1-ASC  \n");
        printf("\t 2-DESC  \n");
        printf("\t 3-retourner  \n");
        int nn ;
        scanf("%d",&nn);
        if (nn==1)
        {
            triEtudiant(ascending);
        }else if (nn==2)
        {
            triEtudiant(descending);
            
        }
        else
        {
           main();
        }
        break;
    case 4 : 
        printf("statistque  \n");
        printf("\t 1-plus grand  \n");
        printf("\t 2-plus petit  \n");
        printf("\t 3-moynne age  \n");
        printf("\t 4-return   \n");
        int nnn ;
        scanf("%d",&nnn);
        if (nnn==1)
        {
            triEtudiant(descending);
            
            printEdutaint(1);
            
        }else if (nnn==2)
        {
            triEtudiant(ascending);
            printEdutaint(1);
            
        }
        else if (nnn==3)
        {
        
            
            //3 moyenne age
            int avg_age=  avgAge();
            
            printf("les moyenne age => %d",avg_age);
        }
        else
        {
           main();
        }
        
        break;
    default:
        printf("break the app ");
        exit(0);
        break;
    }
}



//account sort  function 
void triEtudiant(enum sort sortwith){
    sortwith==0?printf("asending \n"):printf("desnding \n");
        int posmin = 0;
        StudentsStruct  temp ;
    if (sortwith == 0)
    {   
            
            for (int j = 0; j < numStudents; j++)
            {
                for (int i = 1; i < numStudents; i++)
                {
                    if (students[i].date->annee<students[i].date->annee)
                    {
                        temp = students[i];
                        students[i]= students[i-1];
                        students[i-1] = temp;
                    }
                }
            }
            
            printf("============================================\n");
            printf("length of the list is %d  \n",numStudents);
            for (int i = 0; i < numStudents; i++)
            {
                printf("value of i is  %d",i);
                printEdutaint(i);
            }
            printf("============================================\n");
    
    }
    else{
        for (int j = 0; j < numStudents; j++)
            {
                for (int i = 1; i < numStudents; i++)
                {
                    if (students[i].date->annee>students[i-1].date->annee)
                    {
                        temp = students[i];
                        students[i]= students[i-1];
                        students[i-1] = temp;
                    }
                }
            }
            printf("============================================");
            for (int i = 0; i < numStudents; i++)
            {
                printEdutaint(0);
            }
            printf("============================================");

    }
    
}
