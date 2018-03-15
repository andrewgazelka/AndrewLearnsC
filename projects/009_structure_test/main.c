#include <stdio.h>
#include <string.h>

struct Person
{
    char first[15];
    char middleInitial;
    char last[15];
};

void printPerson(struct Person person);

main()
{
    struct Person person;
    strcpy(person.first,"Andrew");
    person.middleInitial='P';
    strcpy(person.last,"Gazelka");
    printPerson(person);
}

void printPerson(struct Person person)
{
    printf("%s %c. %s",person.first,person.middleInitial,person.last);
}
