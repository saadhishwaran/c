#include <stdio.h>

int main() {

    int m, n;
    char op;

    printf("enter n ");
    scanf("%d",&n);

    printf("enter the operator +,-,*,/ : ");
    scanf(" %c",&op);

    printf("enter m ");
    scanf("%d",&m);
    
    switch(op) {
    case'+':{
       int c = n+m;
       printf("%d", c);
       break;
    }
    case'-':{
        int c = n-m;
        printf("%d", c);
        break;
    }
    case'*':{
        int c = n*m;
        printf("%d", c);
        break; 
    }
    case'/':{
        int c = n/m;
        printf("%d", c);
        break;
    }
    default: {
        int c = n+m;
        printf("%d",c);
    }
    }
    return 0;
}