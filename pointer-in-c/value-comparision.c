#include <stdio.h>

int main(){
    int arr[6] ={60,10,20,30,40,50};
    int *ptr = arr;
    for (int i=1;i<6;i++){
        while (*ptr<*(ptr+i)){
            *ptr = *(ptr+i);
        }
    }
    printf("%d",*ptr);
}