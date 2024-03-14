#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_USERS 100

typedef struct User {
    char username[50];
    char password[50];
} User;

User users[MAX_USERS];
int num_users = 0;


void registerUser(char username[], char password[]) {
    if (num_users < MAX_USERS) {
        strcpy(users[num_users].username, username);
        strcpy(users[num_users].password, password);
        num_users++;
        printf("Registrazione completata con successo per l'utente '%s'.\n", username);
    } else {
        printf("Impossibile registrare l'utente '%s'. Numero massimo di utenti raggiunto.\n", username);
    }
}


