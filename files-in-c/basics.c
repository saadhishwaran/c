#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("data.txt","w");
    char name[50];
    int age;
    printf("enter your name and age: ");
    scanf("%s",name);
    scanf("%d",&age);
    fprintf(fp,"%s %d",name,age);
    fclose(fp);
    fp = fopen("data.txt","r");
    char readname[50];
    int readage;
    fscanf(fp,"%s %d",readname,&readage);
    printf("enered values are %s %d",readname,readage);
    return 0;
}