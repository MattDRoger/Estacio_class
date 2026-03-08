 #include <stdio.h> // Biblioteca padrão de entrada e saída (printf, scanf, etc.)

int main() {

    // Declaração e inicialização de variáveis de diferentes tipos

    int idade = 31; 
    // Variável do tipo inteiro (int)
    // Armazena números inteiros sem casas decimais

    float altura = 1.79;
    // Variável do tipo float
    // Usada para números com casas decimais (precisão simples)

    double saldoBancario = 1000.00;
    // Variável do tipo double
    // Também armazena números decimais, porém com maior precisão que float
    // Muito usado em valores financeiros ou cálculos mais precisos

    char inicial = 'R';
    // Variável do tipo char
    // Armazena apenas um caractere (entre aspas simples)

    char nome[20] = "Roger";
    // Vetor de caracteres (string em C)
    // Pode armazenar até 19 letras + o caractere especial '\0'
    // '\0' marca o final da string na linguagem C

    // Impressão das informações no terminal

    printf("Idade: %d anos\n", idade);
    // %d é o especificador de formato para números inteiros

    printf("Altura: %.2f metros\n", altura);
    // %f é usado para números decimais
    // .2 significa mostrar apenas 2 casas decimais

    printf("Saldo Bancário: %.2f reais\n", saldoBancario);
    // Também usa %f para números decimais
    // Mesmo sendo double, printf trata com %f normalmente

    printf("Inicial do Nome: %c\n", inicial);
    // %c é usado para imprimir um único caractere

    printf("Nome: %s\n", nome);
    // %s é usado para imprimir strings (vetores de char)

    return 0;
    // Indica que o programa terminou corretamente
}