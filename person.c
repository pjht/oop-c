#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void init_person(Person *p,int age,char *name) {
    p->age=age;
    p->name=malloc(50*sizeof(char));
    strcpy(p->name,name);
    p->happy_birthday=happy_birthday;
    p->print_age=print_age;
}

Person * new_person(int age,char *name) {
    Person *tmp;
    tmp=malloc(sizeof(Person));
    init_person(tmp,age,name);
    return tmp;
}

//private

void happy_birthday(Person *self) {
    printf("Happy birthday to you, happy birthday to you.\n");
    printf("Happy birthday dear %s, happy birthday to you!\n",self->name);
    self->age=self->age+1;
}

void print_age(Person *self) {
    if (self->age>1) {
        printf("%s is %d years old.\n",self->name,self->age);
    } else if (self->age==1) {
        printf("%s is 1 year old.\n",self->name);
    } else if (self->age==0) {
        printf("%s is a newborn.\n",self->name);
    } else {
        printf("You can't be under 0 years old!\n");
    }
}
