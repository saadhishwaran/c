#include <stdio.h>

int sum(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    return n +sum(n-1);
}

int main(){
    int n;
    printf("enter the N: ");
    scanf("%d",&n);
    int x = sum(n);
    printf("the sum is:%d ",x);
    return 0;
}