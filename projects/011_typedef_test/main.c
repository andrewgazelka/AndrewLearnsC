#include <stdio.h>
#include <string.h>

typedef struct People
{
    char first[15];
    char middleInitial;
    char last[15];
} Person;

void printPerson(Person person);

main()
{
    Person person;
    strcpy(person.first,"Andrew");
    person.middleInitial='P';
    strcpy(person.last,"Gazelka");
    printPerson(person);
}

void printPerson(Person person)
{
    printf("%s %c. %s",person.first,person.middleInitial,person.last);
}
