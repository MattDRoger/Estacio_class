#include <stdio.h>  // Biblioteca padrão de entrada e saída (printf e scanf)

int main() {   
    
    // Declaração das variáveis que irão armazenar os dados digitados pelo usuário
    char nome[20];   // Vetor de caracteres para armazenar o nome (até 19 letras + '\0')
    int idade;       // Variável inteira para armazenar a idade
    float altura;    // Variável decimal para armazenar a altura
    char opcao;      // Variável para armazenar um caractere (s ou n)

    // Pergunta o nome do usuário
    // OBS: o "nome" dentro do printf não tem função aqui
    printf("Qual o seu primeiro nome?: ", nome);

    // Lê uma string digitada pelo usuário e armazena em "nome"
    // %s lê caracteres até encontrar um espaço
    scanf("%s", nome);

    // Pergunta a idade
    printf("Qual sua idade?: ");

    // Lê um número inteiro digitado pelo usuário
    // &idade passa o endereço da variável para que scanf possa armazenar o valor
    scanf("%i", &idade);

    // Pergunta a altura
    printf("Qual sua altura?: ");

    // Tenta ler um número decimal
    // OBS: %.2f está incorreto em scanf (isso é usado em printf)
    scanf("%.2f", &altura);

    // Pergunta se a pessoa aceita café
    printf("Aceita café? s ou n: ");

    // O espaço antes do %c serve para ignorar ENTER ou espaços que ficaram no buffer
    scanf(" %c", &opcao);

    // Impressão dos dados coletados

    printf("Nome?: %s\n", nome);   // Imprime o nome digitado
    printf("Idade: %d\n", idade);  // Imprime a idade (%d para inteiros)

    // Imprime a altura (%f para números decimais)
    printf("Altura: %f\n", altura);

    // ERRO: aqui está imprimindo a variável "nome" usando %c
    // O correto seria imprimir a variável "opcao"
    printf("Deseja café?: %c\n", nome);
}