#include<stdio.h>

struct Persona{
    char name[50];
    int age;
    int date;
    char place[50];
};

int main(){
    struct Persona persona1;
    printf("enter the req: ");
    scanf("%s",persona1.name);
    scanf("%d",&persona1.age);
    scanf("%d",&persona1.date);
    scanf("%s",persona1.place);
    printf("the name is: %s , the age is: %d , the dob is: %d , the place is: %s",persona1.name,persona1.age,persona1.date,persona1.place);
}