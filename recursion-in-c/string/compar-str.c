#include<stdio.h>

int comparestr(char str1[], char str2[],int index){
    if(str1[index] != str2[index]) 
        return 0;
    // if (str1[index] == str2[index]) return 1;
    if(str1[index]=='\0'&&str2[index]=='\0') 
        return 1;
    return comparestr(str1,str2,index +1);
}

int main(){
    char str1[6] ;
    printf("enter str1");
    scanf("%s",str1);
    char str2[6] ;
    printf("enter str2");
    scanf("%s",str2);
    int n = comparestr(str1,str2,0);
    if (n==1) printf("equal");
    if (n==0) printf("unequal");
}