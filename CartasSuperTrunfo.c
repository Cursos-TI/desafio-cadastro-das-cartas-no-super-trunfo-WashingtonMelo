#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

//Teste aluno Washington

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado[20];
    char codigo_da_carta[10];
    char nome_da_cidade[20];
    int populacao;
    float area;
    float pib;
    int numero_de_pontos_turisticos;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

        printf("Digite o nome do primeiro estado, escolhendo-o entre as opções que estão entre parênteses (A, B, C, D, E, F, G, H): \n");
        scanf("%s", &estado);
        
        printf("Digite um código para a primeira carta deste estado, de acordo com a letra do estado escolhida (ex.: A01, B01, C01, D01, E01, F01, G01, H01): \n");
        scanf("%s", codigo_da_carta);
        
        printf("Digite um nome de cidade para esta carta: \n");
        scanf("%s", &nome_da_cidade);
        
        printf("Digite a população desta cidade: \n");
        scanf("%d", &populacao);
        
        printf("Digite a área desta cidade em KM²: \n");
        scanf("%f", &area);
        
        printf("Digite o PIB (Produto Interno Bruto) desta cidade em R$: \n");
        scanf("%f", &pib);
        
        printf("Digite quantos pontos turísticos esta cidade possui: \n");
        scanf("%d", &numero_de_pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

        printf("O nome do estado escolhido é %s\n", estado );
        printf("O códido escolhido para a carta é %s\n", codigo_da_carta);
        printf("O nome da cidade escolhida para a carta é %s\n", nome_da_cidade);
        printf("A cidade tem %d habitantes\n", populacao);
        printf("A área da cidade é de %.3f KM²\n", area);
        printf("O PIB da cidade é R$ %.2f\n", pib);
        printf("A cidade possui %d pontos turísticos\n", numero_de_pontos_turisticos);

    return 0;
    
}