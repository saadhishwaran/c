#include <stdio.h>

int negno(int arr[],int x){
    if (x == 0) {
        return 0;
    }
    if (arr[x-1] < 0 ) {
        return 1 + negno(arr,x-1);
    }
    else {
        return negno(arr,x-1);
    }
}

int main(){
    int x;
    int arr[100];
    printf("enter: ");
    scanf("%d",&x);
    for (int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    int m = negno(arr,x);
    printf("the op is %d",m);
    return 0;
}