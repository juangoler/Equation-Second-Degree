#include <stdio.h>
#include <math.h>

int main()
{
float A, B, C, x, x1, x2;

printf("Digite o valor de A: ");
scanf("%f", &A);

printf("Digite o valor de B: ");
scanf("%f", &B);

printf("Digite o valor de C: ");
scanf("%f", &C);

double disc = B * B - 4 * A * C;

if (disc > 0){
    x1 = (-B + sqrt(disc)) / (2 * A);
    x2 = (-B - sqrt(disc)) / (2 * A);
    
    printf("O resultado de X1 é: %.2f\n", x1);
    printf("O resultado de X2 é: %.2f", x2);
} else if (disc == 0){
    x = -B / (2 * A);
    
    printf("A equação tem uma raiz real e igual:\nX = %.2f\n", x);
} else {
    printf("As raízes não são reais (são complexas).");
}

    return 0;
}