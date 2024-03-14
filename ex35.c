#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anni[3];
    char nome[30];
    char cognome[30];
    printf("benvenuto! si prega di inserire le seguenti informazioni:\n");
    printf("nome: ");
    scanf(" %[^\n]s", nome);
    printf("cognome: ");
    scanf(" %[^\n]s", cognome);
    printf("etá: ");
    scanf("%d", anni);

}

char cameriere()
{
    printf("Commesso\n");
    printf("descrizione: assistenza ai clienti e riassortimento scaffali\n");


}