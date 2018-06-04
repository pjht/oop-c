#ifndef PERSON_H
#define PERSON_H
typedef struct Person Person;
struct Person {
    int age;
    char *name;
    void (*happy_birthday)(Person *);
    void (*print_age)(Person *);
};
//start
void init_person(Person *p,int age,char *name);
Person * new_person(int age,char *name);
#endif
