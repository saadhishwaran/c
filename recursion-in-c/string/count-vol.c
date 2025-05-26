#include <stdio.h>

int countvol(char str[],int ind){
    if (str[ind] == '\0') return 0;
    return ((str[ind] == 'a' || str[ind]=='e' || str[ind] =='i' || str[ind] == 'o' || str[ind] == 'u') + countvol(str,ind+1));
}

int main(){
    char str[100];
    printf("enter the string ");
    scanf("%s",str);
    int n = countvol(str,0);
    printf("the no of vol is %d",n);
}