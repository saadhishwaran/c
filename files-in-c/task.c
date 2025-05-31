#include<stdio.h>

struct Persona{
    char name[50];
    int age;
    int tenthmark;
    int twelvethmark;
    char education[50];
    
    char readname[50];
    int readage;
    int readtenthmark;
    int readtwelvethmark;
    char readeducation[50];
};

int main(){
    FILE *aad;
    aad = fopen("studnt.txt","w");
    struct Persona persona1;
    printf("enter the req: ");
    scanf("%s",persona1.name);
    scanf("%d",&persona1.age);
    scanf("%d",&persona1.tenthmark);
    scanf("%d",&persona1.twelvethmark);
    scanf("%s",persona1.education);
    printf("the name is: %s , the age is: %d , the 10th is: %d , the 12th is %d, the education is: %s",persona1.name,persona1.age,persona1.tenthmark,persona1.twelvethmark,persona1.education);
    fprintf(aad,"%s %d %d %d %s",persona1.name,persona1.age,persona1.tenthmark,persona1.twelvethmark,persona1.education);
    fclose(aad);
    aad = fopen("studnt.txt","r");
    fscanf(aad,"%s %d %d %d %s",persona1.readname,persona1.age,persona1.tenthmark,persona1.twelvethmark,persona1.education);
    printf("the entered values are %s %d %d %d %s",persona1.readname,persona1.readage,persona1.readtenthmark,persona1.readtwelvethmark,persona1.readeducation);
    fclose(aad);
    return 0;
}