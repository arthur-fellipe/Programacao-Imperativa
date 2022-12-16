#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define TAM 5

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
    char horaInicio[5]; // hora de início da atividade
    char dataFim[11]; // data de fim da atividade
    char horaFim[5]; // hora de fim da atividade
    char atividade[50]; // atividade realizada pelo atleta
    float distancia; // distância percorrida
} Plano;


//Procedimento que lê a informação relativa a um ou mais atletas e armazena os dados
Atleta guardarAtleta(Atleta Atleta[TAM])
{
    int novoAtleta;

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

        printf("Inscrever nova atividade? (0-Não ou 1-Sim)\n");
        scanf("%d", &novaAtividade);
        if (novaAtividade == 0)
        {
            break;
        }        
    }    
    
}

//Procedimento que lista os atletas cadastrados
void listarAtleta(Atleta Atleta[TAM], int quantidadeAtletas)
{
    for (int i = 0; i < quantidadeAtletas; i++)
    {
        printf("Atleta %d\nNúmero do atleta: %s\nNome: %s\nTelefone: %s\nIdade: %d\n", i+1, Atleta[i].numeroAtleta, Atleta[i].nome, Atleta[i].telefone, Atleta[i].idade);       
    }    
}

//Procedimento que lista as atividades realizadas
void listarAtividade(Atividade Atividade[TAM], int quantidadeAtividades)
{
    for (int i = 0; i < quantidadeAtividades; i++)
    {
        printf("Atividade %d\nNúmero do atleta: %s\nData: %s\nAtividade: %s\nTempo: %.2fmin\nDistância: %.2fm\n", i+1, Atividade[i].numeroAtleta, Atividade[i].data, Atividade[i].atividade, Atividade[i].tempo, Atividade[i].distancia);       
    }    
}

int main()
{
    int quantidade=1;
    Atleta Atleta[TAM];
    Atividade Atividade[TAM];

    guardarAtleta(Atleta);
    guardarAtividade(Atividade);
    listarAtleta(Atleta, quantidade);
    listarAtividade(Atividade, quantidade);
}