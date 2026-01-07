#include <stdio.h>


float soma(float a, float b) {
    return a + b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a * b;
}

float divisao(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Erro: divisao por zero!\n");
        return 0;
    }
}

int main() {
    int opcao;
    char continuar;

    do {
        float n1, n2;

        // Mostra menu
        printf("===============================\n");
        printf("   Calculadora Simples\n");
        printf("===============================\n");
        printf("Selecione uma operacao:\n");
        printf("1. Adicao\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n5. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 3) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &n1);
            printf("Digite o segundo numero: ");
            scanf("%f", &n2);
        }

        switch (opcao) {
            case 1:
                printf("Resultado: %.2f + %.2f = %.2f\n", n1, n2, soma(n1, n2));
                break;
            case 2:
                printf("Resultado: %.2f - %.2f = %.2f\n", n1, n2, subtracao(n1, n2));
                break;
            case 3:
                printf("Resultado: %.2f * %.2f = %.2f\n", n1, n2, multiplicacao(n1, n2));
                break;
            case 4:
                if (n2 != 0)
                    printf("Resultado: %.2f / %.2f = %.2f\n", n1, n2, divisao(n1, n2));
                break;
            case 5:
                printf("Obrigado por usar a calculadora! Ate a proxima.\n");
                continuar = 'n';
                break;
            default:
                printf("Opcao invalida!\n");
                continuar = 'n';
        }

        if (opcao >= 1 && opcao <= 3) {
            printf("Deseja realizar outra operacao? (s/n): ");
            scanf(" %c", &continuar);
        }

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
