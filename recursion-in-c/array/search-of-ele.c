#include <stdio.h>

int search(int arr[],int n,int ind,int m){
    if (arr[ind]==m){
        return ind+1;
    }
    else{
        return search(arr,n,ind+1,m);
    }
}

int main(){
    int n;
    printf("enter: ");
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m ;
    printf("enter the search ele: ");
    scanf("%d",&m);
    int x = search(arr,n,0,m);
    printf("The ele is found %d", x);
}