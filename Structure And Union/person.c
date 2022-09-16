#include <stdio.h>
#include <string.h>

struct person
{
    char nom[10];
    char prenom[10];
    int age ;
};


int main(){

   struct person p1 = {"khawla","bouziane",19};
   struct person p2 = {"ayoub","elamghani",20};

    p2.age =18;
    //modife
    strcpy(p2.nom,"ayoube 222");
    //comperastion 
    strcmp("khawla",p1.prenom);
    p1.age=19;

   if (strcmp("khawla",p1.prenom)==0)
   {
     printf("khawal 9ed ayoub");
   }
   else if (p1.age > p2.age)
   {
     printf("khawal kbeer  men  ayoub");
    
   }else{
        printf("khawal sgheer  men  ayoub");
   }
   


    

}