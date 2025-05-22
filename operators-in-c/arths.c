#include <stdio.h>
int main(){
    int  a , b;
    char x;
    printf("enter a :");
    scanf("%f", &a);
    printf("enter b :");
    scanf("%f",&b);
    printf("enter a op :(+,-,*,/)");
    scanf(" %c",&x);
    switch(x){
       case 1:{int c = a+b;} break;
       case 2:{int d = a-b;} break;
       case 3:{int e = a*b;} break;
       case 4:{int f = a/b;} break;
    printf("%d",x);
    return 0;
    }
}