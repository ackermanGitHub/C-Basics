#include<stdio.h>
#include"./logic/logic.h"
#include"./logic/logic.c"



int main(void){
    int array[9] = {5,7,2,4,5,5,9,5};
    int logicSize = 8;
    int fisicSize = sizeof(array)/sizeof(int);
    printf("%d \n", find(array, 4, logicSize));
    logicSize = deleteEn(array, logicSize, 5);
    for(int i = 0; i < logicSize; i++){
        printf("%d, ", array[i]);
    }
    return 0;
}