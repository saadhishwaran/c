#include <stdio.h>

void reverse( char str[], int i){
    if (str[i]=='\0') 
        return;
    reverse(str, i+1);
    printf("%c", str[i]);
}
void main(){
    char str[] = "hello";
    reverse(str, 0);
    
}