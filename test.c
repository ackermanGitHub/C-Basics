#include<stdio.h>
#include<stdlib.h>
#include"./logic/logic.h"
#include"./logic/logic.c"


int main(void){
    int array[9] = {4,2,7,5,9,3,1,};
    int logicSize = 7;
    char text[] = "mensajito";
    //calculando tamaño lógico
    int n = sizeof(text); // = 10 becouse it count the end caracter "\0"
    int m = sizeof(array)/sizeof(int); //tamaño físico de text[]
    //imprimiendo arrays con sus tamaños
    printf("%s\n%d\n",text , n);
    for(int i = 0; i < logicSize; i++){
        printf("%d ", array[i]);
    }
    printf("\n%d\n", logicSize);
    //eliminando elemento de array
    logicSize = deleteEn(array, logicSize, 2);
    //imprimiendo array con su tamaño lógico
    for(int i = 0; i < logicSize; i++){
        printf("%d ", array[i]);
    }
    printf("\n%d\n", logicSize);

    return 0;
}