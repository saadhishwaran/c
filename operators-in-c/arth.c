#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Enter value a");
    scanf("%d", &a);
    printf("Enter value b");
    scanf("%d", &b);
    int c = a+b;
    int d = c-a;
    int e = a*c;
    int f = a/b;
    printf("%d %d %d %d",c,d,e,f);
    return 0;
}