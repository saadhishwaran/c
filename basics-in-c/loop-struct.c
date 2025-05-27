#include <stdio.h>

struct Persona{
    char name[50];
    int age;
    int date;
    char place[50];
};

int main(){
    int n;
    printf("entre: ");
    scanf("%d",&n);
    struct Persona persona1[100];
    for (int i = 0;i<n;i++){
        scanf("%s",persona1[i].name);
        scanf("%d",&persona1[i].age);
        scanf("%d",&persona1[i].date);
        scanf("%s",persona1[i].place);
    }
    for (int i=0;i<n;i++){
        printf(" the name is: %s , the age is: %d , the dob is: %d , the place is: %s",persona1[i].name,persona1[i].age,persona1[i].date,persona1[i].place);
    }
    return 0;
}