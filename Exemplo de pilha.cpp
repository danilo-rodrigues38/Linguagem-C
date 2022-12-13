#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int num;
    struct Node *prox;
}no;

int tam;

void inicia(no *LISTA);
int menu();
void opcao(no *LISTA, int op);
no *aloca();
void insereFim(no *LISTA);
void exibe(no *LISTA);
void retiraFim(no *LISTA);

main()
{
    no *LISTA = (no*) malloc(sizeof(no));
    if(!LISTA)
    {
        printf("Sem memoria disponivel!\n");
        exit(1);
    }else
    {
    inicia(LISTA);
    int opt;
        do
        {
        opt=menu();
        opcao(LISTA,opt);
           }
        while(opt);
    free(LISTA);
    }
}

int menu()
{
    int opt;
    printf("Escolha a opcao para a pilha\n");
    printf("0. Sair\n");
    printf("1. Zerar PILHA\n");
    printf("2. Exibir PILHA\n");
    printf("3. PUSH\n");
    printf("4. POP\n");
    printf("Opcao: ");
    scanf("%d", &opt);
    return opt;
}

void opcao(no *LISTA, int op)
{
    switch(op)
    {
        case 0:
            break;
        case 1:
            inicia(LISTA);
            break;
        case 2:
            exibe(LISTA);
            break;      
        case 3:
            insereFim(LISTA);
            break;
        case 4:
            retiraFim(LISTA);
            break;
        default:
            printf("Comando invalido\n\n");
    }
}

void inicia(no *LISTA)
{
    LISTA->prox = NULL;
    tam=0;
}

int vazia(no *LISTA)
{
    if(LISTA->prox == NULL)
        return 1;
    else
        return 0;
}

no *aloca()
{
    no *novo=(no*) malloc(sizeof(no));
    if(!novo)
    {
        printf("Sem memoria disponivel!\n");
        exit(1);
    }
    else
    {
        printf("Novo elemento: ");
        scanf("%d", &novo->num);
        return novo;
    }
}

void insereFim(no *LISTA)
{
    no *novo = aloca();
    novo->prox = NULL;
    if(vazia(LISTA))
        LISTA->prox = novo;
    else
    {
        no *tmp = LISTA->prox;
        while(tmp->prox != NULL)
            tmp = tmp->prox;
        tmp->prox = novo;
    }
    tam++;
}

void exibe(no *LISTA)
{
    system("cls");
    if(vazia(LISTA))
    {
        printf("Lista vazia\n\n");
        return ;
    }
    no *tmp;
    tmp = LISTA->prox;
    printf("Lista:");
    while( tmp != NULL)
    {
        printf("%6d", tmp->num);
        tmp = tmp->prox;
    }
    printf("\n\n");
}

void retiraFim(no *LISTA)
{
    if(LISTA->prox == NULL)
    {
        printf("Lista vazia\n\n");
    }
    else
    {
        no *ultimo = LISTA->prox,*penultimo = LISTA;
        while(ultimo->prox != NULL)
        {
            penultimo = ultimo;
            ultimo = ultimo->prox;
        }
        penultimo->prox = NULL;
        tam--;
    }
}

