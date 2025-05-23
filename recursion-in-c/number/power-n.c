#include<stdio.h>

int power_m(int x,int m){
    if (x==0) return 0;
    return x * power_m(x,m-1);
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