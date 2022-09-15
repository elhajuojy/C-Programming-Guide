#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
    typedef struct
    {
        char* firstName;
        char* lastName;
        int rollNumber;

    } STUDENT;

    int numStudents=2;
    int x;
    STUDENT* students = malloc(numStudents * sizeof *students);
    //function 
    for (x = 0; x < numStudents; x++)
    {
        students[x].firstName=(char*)malloc(sizeof(char*));
       
        printf("Enter first name :");
        scanf("%s",students[x].firstName);
        
        students[x].lastName=(char*)malloc(sizeof(char*));
        printf("Enter last name :");
        scanf("%s",students[x].lastName);
        printf("Enter roll number  :");
        scanf("%d",&students[x].rollNumber);

    }

    for (x = 0; x < numStudents; x++)
        printf("First Name: %s, Last Name: %s, Roll number: %d\n",students[x].firstName,students[x].lastName,students[x].rollNumber);

    return (0);
}