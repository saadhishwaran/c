#include <stdio.h>
int main(){
    int a;
    printf("enter a ");
    scanf("%d", &a);
    int b;
    printf("enter b ");
    scanf("%d", &b);
    int c = a>10 && b>10;
    printf("%d",c);
}