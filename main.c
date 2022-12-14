#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define TAM 5

typedef struct registo
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

typedef struct registo
{
    char numeroAtleta[10]; // número do atleta
    char data[11]; // data da atividade
    char atividade[50]; // atividade realizada pelo atleta
    float tempo; // tempo de duração
    float distancia; // distância percorrida
} Atividade;

typedef struct registo
{
    char numeroAtleta[10]; // número do atleta
    char dataInicio[11]; // data de início da atividade
    char horaInicio[5]; // hora de início da atividade
    char dataFim[11]; // data de fim da atividade
    char horaFim[5]; // hora de fim da atividade
    char atividade[50]; // atividade realizada pelo atleta
    float distancia; // distância percorrida
} Plano;


//Procedimento que lê a informação relativa a um ou mais atletas e armazena os dados
Atleta guardarAtleta(Atleta Clube[TAM])
{
    int quantidade = 0, novoAtleta;

    for (int i = 0; i < TAM; i++)
    {        
        printf("Digite o número do atleta: \n");
        scanf("%s", &Clube[i].numeroAtleta);
        printf("Digite o nome do atleta: \n");
        scanf("%s", Clube[i].nome);
        printf("Digite o telefone do atleta: \n");
        scanf("%s", Clube[i].telefone);
        printf("Digite a idade do atleta: \n");
        scanf("%d", &Clube[i].idade);

        quantidade++;
        printf("Inscrever novo atleta? (0-Não ou 1-Sim)\n");
        scanf("%d", &novoAtleta);
        if (novoAtleta == 0)
        {
            break;
        }    
    }    
    
}

Atividade guardarAtividade(Atividade Actividade[TAM], Atleta Clube[TAM])
{
    int quantidade = 0, novaAtividade;
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o número do atleta: \n");
        scanf("%s", &Actividade[i].numeroAtleta);         
        printf("Digite o nome do atleta: \n");
        scanf("%s", Clube[i].nome);
        printf("Digite o telefone do atleta: \n");
        scanf("%s", Clube[i].telefone);
        printf("Digite a idade do atleta: \n");
        scanf("%d", &Clube[i].idade);

        for (int j = 0; i < TAM; j++)
        {
            if (Actividade[i].numeroAtleta == Clube[j].numeroAtleta)
            {
                /*CÓDIGO*/
            }
        }
        
        quantidade++;
        printf("Inscrever novo atleta? (0-Não ou 1-Sim)\n");
        scanf("%d", &novoAtleta);
        if (novoAtleta == 0)
        {
            break;
        }        
    }    
    
}

int main()
{
    int tam;
    Atleta Clube[/*************/];
    
    printf("Quantos atletas quer inserir?\n");
    scanf("%d", &tam);
}