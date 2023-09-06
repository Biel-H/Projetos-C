#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    char operator;
    int num1, num2, resultado;
    
    setlocale(LC_ALL,"Portuguese");

    printf("Olá! Esta calculdora é gratuita.\nPara usa-la precisa apenas inserir o primeiro número seguido do operador e o segundo número, Ex: [n1] + [n2].\n\n");
    printf("\t\tOs operadores que podem ser inseridos são:\n\t\tAdição[+]\n\t\tSubtração[-]\n\t\tDivisão[/]\n\t\tMultiplicação[*]\n\t\tResto de uma divisão inteira[%%]\n\n");
    printf("Digite a conta desejada: ");
    scanf("%d %c %d", &num1, &operator, &num2);

    switch (operator)
    {
    case '+':
        resultado = num1 + num2;
        printf("%d + %d = %d", num1, num2, resultado);
        break;

    case '-':
        resultado = num1 - num2;
        printf("%d - %d = %d", num1, num2, resultado);
        break;
    
    case '/':
        resultado = num1 / num2;
        printf("%d / %d = %d", num1, num2, resultado);
        break;

    case '*':
        resultado = num1 * num2;
        printf("%d * %d = %d", num1, num2, resultado);
        break;    
    }

    if (operator == '%')
    {
        resultado = num1 % num2;
        printf("\nO resto da divisão inteira de %d %% %d = %d", num1, num2, resultado);
    }

    fail:
    printf("Fail.\n");
    
}