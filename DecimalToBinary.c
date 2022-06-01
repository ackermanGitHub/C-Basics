#include<stdio.h>
#include<stdlib.h>

int binaryNumber[12], n, i;

int main(void){
    system("cls");
    system("color 9F");
    printf("Ingrese un valor decimal\n");
    scanf("%d", &n);

    for(i = 0; n > 0; i++){
        binaryNumber[i] = n % 2;
        n = n / 2;
    }
    printf("La conversión de %d a binario es: \n", n);
    for (i = i - 1; i >= 0; i--){
        printf("%d ", binaryNumber[i]);
    }
    
    return 0;
}