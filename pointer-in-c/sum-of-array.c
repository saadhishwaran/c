#include <stdio.h>

int main(){
    int arr[6] = {10,20,60,30,40,50};
    int *ptr = arr;
    for (int i=1;i<6;i++){ *ptr += *(ptr+i);}
    printf("%d",*ptr);
}