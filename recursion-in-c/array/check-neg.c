#include <stdio.h>

int negno(int arr[],int n){
    if (arr[n] < 0 ) return 1 + negno(arr,n-1);
    else return negno(arr,n-1);
}

int main(){
    int x;
    printf("enter: ");
    scanf("%d",&x);
    int arr[100];
    for (int i;i<x;i++){
        scanf("%d",&arr[i]);
    }
    int m = negno(arr,x);
    printf("the op is %d",m);
}