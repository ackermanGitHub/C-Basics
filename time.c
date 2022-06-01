#include<stdio.h>
#include<time.h>

time_t seconds;
time_t begin, end;

int main(void){
    seconds = time(NULL);
    printf("El numero de horas desde EPOCH (1ero de enero de 1970) a las 00:00 es %ld \n", seconds/3600);
    begin = time(NULL);
    for (int i = 0; i < 150000000; i++); 
    end = time(NULL);
    printf("El tiempo que se demoró nuestro for es: %f \n", difftime(end, begin));
    
    return 0;
}