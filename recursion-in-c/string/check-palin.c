#include <stdio.h>
#include <string.h>
int palin(char str[],int start,int end){
    if (str[start]==str[end]){
        printf("itis palindrome");
        return 1;
    }
    else{
        printf("it is not a palindrome");
        return 0;
    }
    return palin(str,start,end);
}

int main(){
    char str[10];
    printf("enter the strin: ");
    scanf("%s",str);
    int n = strlen(str);
    palin(str,0,n-1);
    return 0;
} 