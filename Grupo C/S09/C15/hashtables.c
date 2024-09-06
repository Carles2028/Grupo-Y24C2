#include<cs50.h>
#include <stdio.h>
#include <stdlib.h>

#define alfabeto 26
#define largo 50

unsigned int hash(char *word);
typedef struct Nodo
{
    char palabra[largo];
    struct Nodo *next;
}

Node *table[alfabeto];

int main()
{
    //todos los punteros en nulo
    for(int i =0; i < alfabeto; i++)
    {
        table[i] = NULL;
    }

    char *words[3];
    for(int i =0; i < 3; i++)
    {
        words[i] = get_string("Ingree algo: ");
    }
    for(int i =0; i < 3; i++)
    {
        unsigned int valor = hash(words[i]);

        Nodo *nuevo_nodo = malloc(sizoef(Nodo));

        strcpy(nuevo_nodo->palabra, words[i]);
        nuevo_nodo->next = NULL:

        if(table[i] == NULL)
        {
            table[valor] = nuevo_nodo;
        }
        else{
            Nodo *temp = table[valor];
            while(temp->next -= NULL)
            {
                temp = temp->next;
            }
            temp->next = nuevo_nodo;
        }
    }


}

unsigned int hash(char *word)
{
    return word[0] - 'a';
}
