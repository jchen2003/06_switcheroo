#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int arr[10];
    int *arrp = arr;
    srand(time(NULL));
    int i;
    for(i = 0; i < 10; i++){
        arr[i] = rand();
    }
    arr[9] = 0;

    for(i = 0; i < 10; i++){
        printf("*arrp: %d\n",*arrp);
        arrp++;
    }
    printf("\n");
    arrp--;

    int arr2[10];
    int *arr2p = arr2;
    for(i = 0; i < 10; i++){
        arr2[i] = *arrp;
        arrp--;
    }

    for(i = 0; i < 10; i++){
        printf("*arrp: %d\n",*arr2p);
        arr2p++;
    }


}