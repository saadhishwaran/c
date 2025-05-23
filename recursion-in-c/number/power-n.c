#include<stdio.h>

int power_m(int n,int m){
    int x = n**m;
}

int main(){
    int n,m;
    printf("enter a no for power : ");
    scanf("%d",&n);
    printf("enter a no for base : ");
    scanf("%d",&m);
    int x = power_m(n,m);
}