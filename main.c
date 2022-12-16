#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define TAM 5

typedef struct registo
{
    //Atleta
    char numeroAtleta[10]; // número do atleta
    char nome[50]; // nome do atleta
    char telefone[9]; // telefone do atleta
    int idade; // idade do atleta
    //Atividade
    char data[11]; // data da atividade
    char atividade[50]; // atividade realizada pelo atleta
    float tempo; // tempo de duração
    float distancia; // distância percorrida
    //Plano
    char dataInicio[11]; // data de início da atividade
    char horaInicio[5]; // hora de início da atividade
    char dataFim[11]; // data de fim da atividade
    char horaFim[5]; // hora de fim da atividade
    // char atividade[50]; // atividade realizada pelo atleta
    // float distancia; // distância percorrida
} Dados;

/*struct data
{
    int dia;
    int mes;
    int ano;
};*/

// typedef struct registo
// {
//     char numeroAtleta[10]; // número do atleta
//     char data[11]; // data da atividade
//     char atividade[50]; // atividade realizada pelo atleta
//     float tempo; // tempo de duração
//     float distancia; // distância percorrida
// } Atividade;

// typedef struct registo
// {
//     char numeroAtleta[10]; // número do atleta
//     char dataInicio[11]; // data de início da atividade
//     char horaInicio[5]; // hora de início da atividade
//     char dataFim[11]; // data de fim da atividade
//     char horaFim[5]; // hora de fim da atividade
//     char atividade[50]; // atividade realizada pelo atleta
//     float distancia; // distância percorrida
// } Plano;


//Procedimento que lê a informação relativa a um ou mais atletas e armazena os dados
Dados guardarAtleta(Dados Atleta[TAM])
{
    int quantidade = 0, novoAtleta;

    for (int i = 0; i < TAM; i++)
    {        
        printf("Digite o número do atleta: \n");
        scanf("%s", Atleta[i].numeroAtleta);
        printf("Digite o nome do atleta: \n");
        scanf("%s", Atleta[i].nome);
        printf("Digite o telefone do atleta: \n");
        scanf("%s", Atleta[i].telefone);
        printf("Digite a idade do atleta: \n");
        scanf("%d", &Atleta[i].idade);

        quantidade++;
        printf("Inscrever novo atleta? (0-Não ou 1-Sim)\n");
        scanf("%d", &novoAtleta);
        if (novoAtleta == 0)
        {
            break;
        }    
    }    
    
}

/*Dados guardarAtividade(Dados Atividade[TAM], Dados Atleta[TAM])
{
    int quantidade = 0, novaAtividade;
    for (int i = 0; i < TAM; i++)
    {
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

        
        quantidade++;
        printf("Inscrever nova atividade? (0-Não ou 1-Sim)\n");
        scanf("%d", &novaAtividade);
        if (novaAtividade == 0)
        {
            break;
        }        
    }    
    
}*/

int main()
{
    Dados Atleta[TAM], Atividade[TAM];

    guardarAtleta(Atleta);
    //guardarAtividade(Atividade, Atleta);
}