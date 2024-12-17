#include <stdio.h>

int main(){
    int num1, num2, soma;

    printf("Soma dois numeros \n");
    scanf (" %d", &num1);
    scanf (" %d", &num2);
    soma = num1+num2;

    printf("O resultado da soma : %d, %d é %d", num1, num2, soma);
    return 0;
}