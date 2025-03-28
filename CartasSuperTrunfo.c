#include <stdio.h>

// Desafio Super Trunfo - Países (Nível novato)
// Tema 1 - Cadastro das Cartas

// Teste aluno Francico Washington de Jesus Melo

int main() {
    
    // Definição de variáveis separadas para cada atributo da cidade.
    // Utilização dos atributos: Nome do estado, código da carta, nome da cidade, população, área, PIB e número de pontos turísticos.
    
    char estado[20];
    char codigo_da_carta[10];
    char nome_da_cidade[20];
    int populacao;
    float area;
    float pib;
    int numero_de_pontos_turisticos;

    // Cadastramento das Cartas, solicitando ao usuário através da função printf que insira as informações de cada cidade, como o código, nome, população, área e etc.
    // Utilização da função scanf para capturar as entradas de dados do usuário para cada atributo.

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

    // Exibição dos Dados das Cartas
    // Utilização da função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exibição de valores inseridos para cada atributo da cidade, um por linha.

        printf("O nome do estado escolhido é %s\n", estado );
        printf("O códido escolhido para a carta é %s\n", codigo_da_carta);
        printf("O nome da cidade escolhida para a carta é %s\n", nome_da_cidade);
        printf("A cidade tem %d habitantes\n", populacao);
        printf("A área da cidade é de %.3f KM²\n", area);
        printf("O PIB da cidade é R$ %.2f\n", pib);
        printf("A cidade possui %d pontos turísticos\n", numero_de_pontos_turisticos);

    return 0;
    
}
