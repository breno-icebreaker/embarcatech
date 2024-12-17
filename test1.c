#include <stdio.h>

int subtracao (){

 int resultado, num1, num2;
    printf ("Operacao de subtração \n");
    scanf (" %d", &num1);
    scanf (" %d", &num2);
    resultado = num2 - num1;
    return resultado;
}

int main(){
    int num1, num2, soma;

    printf("Soma dois numeros \n");
    scanf (" %d", &num1);
    scanf (" %d", &num2);
    soma = num1+num2;
// comentario
// comentario 2
    printf("O resultado da soma : %d, %d é %d", num1, num2, soma);

    printf ("Se deseja subtrair escolha - \n");
    char escolha;
    scanf (" %c", &escolha);
    if (escolha == '-'){
        printf ("O resultado e: %d ", subtracao());
    } 
    return 0;
}