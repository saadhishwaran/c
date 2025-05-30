#include <stdio.h>

int forwardarr(int arr[],int n,int a){
    if (a==n) 
        return 0;
    
    forwardarr(arr,n-1,a);
    printf("%d", arr[n-1]);
    
}

int main(){
    int n;
    printf("enter: ");
    scanf("%d",&n);
    int arr[20];
    for (int i = 0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    forwardarr(arr,n,0);
    return 0;
}