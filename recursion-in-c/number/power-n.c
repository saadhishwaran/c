#include<stdio.h>

int power_m(int x,int m){
    if (x==0) return 0;
    if (m==0){
        printf("not defined");
        return 0;
    }
    return x * power_m(x,m);
}

int main(){
    int x,m;
    printf("enter a no for power : ");
    scanf("%d",&x);
    printf("enter a no for base : ");
    scanf("%d",&m);
    int n = power_m(x,m);
    printf("%d",n);
}