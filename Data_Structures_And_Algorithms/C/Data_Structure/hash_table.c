#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct hash_t
{
    char key[MAX_NAME];
    int value;
    //...Other Stuffs...
    struct hash_t *next;
}hash_t;

hash_t *hash_table[TABLE_SIZE];

unsigned int hash(char *key)
{
    int len = strlen(key);
    unsigned int hash_value = 0;
    for(int i = 0; i < len; i++)
    {
        hash_value += key[i];
        hash_value = hash_value * key[i] % TABLE_SIZE;
    }
    return hash_value;
}

void init_hash_table()
{
    for(int i = 0; i < TABLE_SIZE; i++)
        hash_table[i] = NULL;
    // Hash is Empty...
}


void print_hash_table()
{
    printf("Start\n");
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if(hash_table[i] == NULL) printf("\t%d\t---\n", i);
        else
        {
            printf("\t%d\t",i);
            hash_t *temp = hash_table[i];
            while(temp != NULL)
            {
                printf("%s --> ", temp->key);
                temp = temp->next;
            }
            printf("\n");
        }
    }
    printf("End\n");
}

bool hash_table_insert(hash_t *h)
{
    if(h == NULL) return false;
    int index = hash(h->key);
    h->next = hash_table[index];
    hash_table[index] = h;
    return true;
}

hash_t *hash_table_lookup(char *key)
{
    int index = hash(key);
    hash_t *temp = hash_table[index];
    while(temp != NULL && strcmp(temp->key, key) != 0)
    {
        temp = temp->next;
    }
    return temp;
}

hash_t *hash_table_delete(char *key)
{
    int index = hash(key);
    hash_t *temp = hash_table[index];
    hash_t *prev = NULL;
    while(temp != NULL && strcmp(temp->key, key) != 0)
        temp = temp->next;
    if(temp == NULL) return NULL;
    if(prev == NULL) hash_table[index] = temp->next;
    else prev->next = temp->next;
    return temp;
}


//-------------------------------------------------------------------------------//

int main()
{
    init_hash_table();

    hash_t jacob = {.key = "Jacob", .value = 256};
    hash_t kate = {.key = "Kate", .value = 25};
    hash_t friend = {.key = "Friend", .value = 66};
    hash_t mpho = {.key = "Mpho", .value = 16};
    hash_t hello = {.key = "Hello", .value = 37};
    hash_t sarah = {.key = "Sarah", .value = 36};
    hash_t edna = {.key = "Edna", .value = 73};
    hash_t maren = {.key = "Maren", .value = 64};
    hash_t eliza = {.key = "Eliza", .value = 91};
    hash_t jane = {.key = "Jane", .value = 38};

    hash_table_insert(&jacob);
    hash_table_insert(&kate);
    hash_table_insert(&friend);
    hash_table_insert(&mpho);
    hash_table_insert(&hello);
    hash_table_insert(&sarah);
    hash_table_insert(&edna);
    hash_table_insert(&maren);
    hash_table_insert(&eliza);
    hash_table_insert(&jane);

    print_hash_table();

    hash_t *temp = hash_table_lookup("jarvis");
    if(temp == NULL) printf("Not Found...\n");
    else printf("Found ---> %s\n", temp->key);

    temp = hash_table_lookup("Mpho");
    if(temp == NULL) printf("Not Found...\n");
    else printf("Found ---> %s\n", temp->key);

    hash_table_delete("Mpho");
    temp = hash_table_lookup("Mpho");
    if(temp == NULL) printf("Not Found...\n");
    else printf("Found ---> %s\n", temp->key);

    print_hash_table();

    /*printf("Friend \t=> \t%u\n", hash("Friend"));
    printf("Shifat \t=> \t%u\n", hash("Shifat"));
    printf("Hasan \t=> \t%u\n", hash("Hasan"));
    printf("Suhaad \t=> \t%u\n", hash("Suhaad"));
    printf("Name \t=> \t%u\n", hash("Name"));
    printf("Hakim \t=> \t%u\n", hash("Hakim"));
    printf("Selina \t=> \t%u\n", hash("Selina"));
    printf("Abul \t=> \t%u\n", hash("Abul"));
    printf("Akter \t=> \t%u\n", hash("Akter"));
    printf("Jarvis \t=> \t%u\n", hash("Jarvis"));*/

    return 0;
}