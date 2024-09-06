#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define alfabeto 26
#define MAX 50

unsigned int hash(char *str);

typedef struct Nodo
{
    char word[MAX];
    struct Nodo *next;
} Nodo;

Nodo *table[alfabeto];

int main()
{
    for (int i = 0; i < alfabeto; i++)
    {
        table[i] = NULL;
    }

    char *words[3];

    for (int i = 0; i < 3; i++)
    {
        words[i] = get_string("Ingrese una palabra: ");
    }
    for (int i = 0; i < 3; i++)
    {
        unsigned int index = hash(words[i]);

        Nodo *nuevo_nodo = malloc(sizeof(Nodo));
        if (nuevo_nodo == NULL)
        {
            return 1;
        }
        strcpy(nuevo_nodo->word, words[i]);
        nuevo_nodo->next = NULL;

        if (table[index] == NULL)
        {
            table[index] = nuevo_nodo;
        }
        else
        {
            Nodo *temp = table[index];
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = nuevo_nodo;
        }
    }
    for (int i = 0; i < alfabeto; i++)
    {
        Nodo *temp = table[i];
        if (temp == NULL)
        {
            printf("indice %d (letra %c) -> NULL\n", i, 'a' + i);
        }
        else
        {
            printf("posicion %d (letra %c): ", i, 'a' + i);
            while (temp != NULL)
            {
                printf("%s --> NULL\n", temp->word);
                temp = temp->next;
            }
        }
    }
    for (int i = 0; i < alfabeto; i++)
    {
        Nodo *temp = table[i];
        while (temp != NULL)
        {
            Nodo *delete = temp;
            temp = temp->next;
            free(delete);
        }
    }
    return 0;
}

unsigned int hash(char *str)
{
    if (isupper(str[0]))
    {
        return str[0] - 'A';
    }
    else
    {
        return str[0] - 'a';
    }
}
