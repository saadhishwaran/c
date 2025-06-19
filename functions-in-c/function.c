#include <stdio.h>

int arth(){
    int  a,b;
    printf("enter no a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d",&b);
    int c = a+b;
    int d = a-b;
    int e = a*b;
    int f = a/b;
    printf("%d %d %d %d",c,d,e,f);
    return 0;
}

int assign(){
    int a,b;
    printf("enter a :");
    scanf("%d",&a);
    printf("enter b :");
    scanf("%d",&b);
    int c = a+=b;
    int d = a-=b;
    int e = a*=b;
    int f = a/=b;
    printf("%d %d %d %d", c,d,e,f);
    return 0;
}

int logic(){
    int a,b;
    printf("enter a ");
    scanf("%d", &a);
    printf("enter b ");
    scanf("%d", &b);
    int c = a&&b;
    printf("%d",c);
    return 0;
}

int calc(){
    int a, b;
    char op;
    printf("enter a ");
    scanf("%d",&a);
    printf("enter the operator +,-,*,/ : ");
    scanf(" %c",&op);
    printf("enter b ");
    scanf("%d",&b);
    switch(op) {
    case'+':{
       int c = a+b;
       printf("%d", c);
       break;
    }
    case'-':{
        int c = a-b;
        printf("%d", c);
        break;
    }
    case'*':{
        int c = a*b;
        printf("%d", c);
        break; 
    }
    case'/':{
        int c = a/b;
        printf("%d", c);
        break;
    }
    default: {
        int c = a+b;
        printf("%d",c);
    }
    }
    return 0;
}

int main(){
    int x;
    printf("enter a value (1-arth,2-assign,3-logic,4-clac)");
    scanf("%d",&x);
    switch(x){
    case 1:{arth();}break;
    case 2:{assign();}break;
    case 3:{logic();}break;
    case 4:{calc();}break;
    default: break;
    }
    return 0;
}
