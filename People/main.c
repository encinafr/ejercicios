#include <stdio.h>
#include <stdlib.h>
#include "Person.h"


int main()
{
    int edad;
    Person* personArray[10];
    int i;
    printf("ingrese edad:");
        scanf("%d",&edad);
    for(i = 0; i < 10; i++)
    {
        personArray[i] = person_new(edad,i);
    }

    for(i = 0; i < 0; i++)
    {

        person_setAge(personArray[i],edad);
    }
    for(i = 0; i < 10; i++)
    {
        printf("\nAge: %2d",person_getAge(personArray[i]));
    }
    scanf(" ");
    return 0;
}

