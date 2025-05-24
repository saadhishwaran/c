#include<stdio.h>

int power_m(int x,int m){
    if (x==0) return 1;
    return m * power_m(x-1,m);
}

int main(){
    int x,m;
    printf("enter a no for power : ");
    scanf("%d",&x);
    printf("enter a no for base : ");
    scanf("%d",&m);
    printf("%d",  power_m(x,m));
}