#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 5
//Variáveis globais
int quantidadeAtleta=0, quantidadeAtividade=0, quantidadePlano=0;

typedef struct Atleta
{
    char numeroAtleta[10]; // número do atleta
    char nome[50]; // nome do atleta
    char telefone[9]; // telefone do atleta
    int idade; // idade do atleta
} Atleta;

/*struct data
{
    int dia;
    int mes;
    int ano;
};*/

typedef struct Atividade
{
    char numeroAtleta[10]; // número do atleta
    char data[11]; // data da atividade
    char atividade[50]; // atividade realizada pelo atleta
    float tempo; // tempo de duração
    float distancia; // distância percorrida
} Atividade;

typedef struct Plano
{
    char numeroAtleta[10]; // número do atleta
    char dataInicio[11]; // data de início da atividade
    char horaInicio[6]; // hora de início da atividade
    char dataFim[11]; // data de fim da atividade
    char horaFim[6]; // hora de fim da atividade
    char atividade[50]; // atividade realizada pelo atleta
    float distancia; // distância percorrida
} Plano;


//Procedimento que lê a informação relativa a um ou mais atletas e armazena os dados
Atleta guardarAtleta(Atleta Atleta[TAM])
{
    int novoAtleta;

    for (int i = 0; i < TAM; i++)
    {        
        printf("\nNOVO ATLETA\n");
        printf("Digite o número do atleta: \n");
        scanf("%s", Atleta[i].numeroAtleta);
        printf("Digite o nome do atleta: \n");
        scanf("%s", Atleta[i].nome);
        printf("Digite o telefone do atleta: \n");
        scanf("%s", Atleta[i].telefone);
        printf("Digite a idade do atleta: \n");
        scanf("%d", &Atleta[i].idade);

        quantidadeAtleta++;
        printf("Inscrever novo atleta? (0-Não ou 1-Sim)\n");
        scanf("%d", &novoAtleta);
        if (novoAtleta == 0)
        {
            break;
        }    
    }
}

//Procedimento que lê a informação relativa a uma ou mais atividades realizadas e armazena os dados
Atividade guardarAtividade(Atividade Atividade[TAM])
{
    int novaAtividade;
    for (int i = 0; i < TAM; i++)
    {
        printf("\nNOVA ATIVIDADE\n");
        printf("Digite o número do atleta: \n");
        scanf("%s", Atividade[i].numeroAtleta);         
        printf("Digite a data de realização da atividade: \n");
        scanf("%s", Atividade[i].data);
        printf("Digite a atividade realizada: \n");
        scanf("%s", Atividade[i].atividade);
        printf("Digite o tempo de duração da atividade: \n");
        scanf("%f", &Atividade[i].tempo);
        printf("Digite a distância percorrida durante a atividade: \n");
        scanf("%f", &Atividade[i].distancia);

        quantidadeAtividade++;
        printf("Inscrever nova atividade? (0-Não ou 1-Sim)\n");
        scanf("%d", &novaAtividade);
        if (novaAtividade == 0)
        {
            break;
        }        
    }    
    
}

//Procedimento que lê a informação relativa a um ou mais planos de atividades a serem realizadas e armazena os dados
Plano guardarPlano(Plano Plano[TAM])
{
    int novoPlano;
    for (int i = 0; i < TAM; i++)
    {
        printf("\nNOVO PLANO DE ATIVIDADE\n");
        printf("Digite o número do atleta: \n");
        scanf("%s", Plano[i].numeroAtleta);         
        printf("Digite a data de início da realização da atividade: \n");
        scanf("%s", Plano[i].dataInicio);
        printf("Digite o horário de início da atividade: \n");
        scanf("%s", Plano[i].horaInicio);
        printf("Digite a data de fim da realização da atividade: \n");
        scanf("%s", Plano[i].dataFim);
        printf("Digite o horário de fim da atividade: \n");
        scanf("%s", Plano[i].horaFim);
        printf("Digite a atividade a ser realizada: \n");
        scanf("%s", Plano[i].atividade);
        printf("Digite a distância a ser percorrida durante a atividade: \n");
        scanf("%f", &Plano[i].distancia);

        quantidadePlano++;
        printf("Inscrever novo plano? (0-Não ou 1-Sim)\n");
        scanf("%d", &novoPlano);
        if (novoPlano == 0)
        {
            break;
        }        
    }    
    
}

//Procedimento que lista os atletas cadastrados
void listarAtleta(Atleta Atleta[TAM])
{
    printf("\nLISTA DE ATLETAS\n");
    for (int i = 0; i < quantidadeAtleta; i++)
    {
        printf("Atleta %d\nNúmero do atleta: %s\nNome: %s\nTelefone: %s\nIdade: %d\n", i+1, Atleta[i].numeroAtleta, Atleta[i].nome, Atleta[i].telefone, Atleta[i].idade);       
    }    
}

//Procedimento que lista as atividades realizadas
void listarAtividade(Atividade Atividade[TAM])
{
    printf("\nLISTA DE ATIVIDADES\n");
    for (int i = 0; i < quantidadeAtividade; i++)
    {
        printf("Atividade %d\nNúmero do atleta: %s\nData: %s\nAtividade: %s\nTempo: %.2fmin\nDistância: %.2fm\n", i+1, Atividade[i].numeroAtleta, Atividade[i].data, Atividade[i].atividade, Atividade[i].tempo, Atividade[i].distancia);       
    }    
}

//Procedimento que lista os planos das atividades a serem realizadas
void listarPlano(Plano Plano[TAM])
{
    printf("\nLISTA DE PLANOS DE ATIVIDADES\n");
    for (int i = 0; i < quantidadePlano; i++)
    {
        printf("Plano %d\n", i+1);
        printf("Número do atleta: %s\n", Plano[i].numeroAtleta);
        printf("Data de início: %s\n", Plano[i].dataInicio);
        printf("Hora de início: %s\n", Plano[i].horaInicio);
        printf("Data de fim: %s\n", Plano[i].dataFim);
        printf("Hora de fim: %s\n", Plano[i].horaFim);
        printf("Atividade: %s\n", Plano[i].atividade);
        printf("Distância: %.2fm\n", Plano[i].distancia);
    }    
}

int main()
{

    Atleta Atleta[TAM];
    Atividade Atividade[TAM];
    Plano Plano[TAM];

    guardarAtleta(Atleta);
    guardarAtividade(Atividade);
    guardarPlano(Plano);
    listarAtleta(Atleta);
    listarAtividade(Atividade);
    listarPlano(Plano);
}