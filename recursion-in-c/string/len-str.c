#include <stdio.h>

int lenstr(char str[],int index){
    if (str[index]=='\0') 
        return 0;
    return 1 + lenstr(str,index +1);
}

int main(){
    char str[100];
    printf("enter a str to value ");
    scanf("%s",str);
    int n = lenstr(str,0);
    //if (n==0) 
    printf("the len of str is %d", n);
}