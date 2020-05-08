#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#define MAX_NAME 256
#define TABLE_SIZE 10
#define DELETED_NODE (hash_t*)(0xFFFFFFFFFFFFFFFF)

typedef struct
{
    char key[MAX_NAME];
    int value;
    // Other Stuffs...
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
        else if(hash_table[i] == DELETED_NODE) printf("\t%d\t--- < DELETED >\n", i);
        else printf("\t%d\t%s\n",i, hash_table[i]->key);
    }
    printf("End\n");
}

bool hash_table_insert(hash_t *h)
{
    if(h == NULL) return false;
    int index = hash(h->key);
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        int try = (i + index) % TABLE_SIZE;
        if(hash_table[try] == NULL || hash_table[try] == DELETED_NODE)
        {
            hash_table[try] = h;
            return true;
        }
    }
    return false;
}

hash_t *hash_table_lookup(char *key)
{
    int index = hash(key);
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        int try = (index + i) % TABLE_SIZE;
        if(hash_table[try] == NULL) return false;
        if(hash_table[try] == DELETED_NODE) continue;
        if(strcmp(hash_table[try]->key, key) == 0) return hash_table[try];
    }
    return NULL;
}

hash_t *hash_table_delete(char *key)
{
    int index = hash(key);
    for(int i = 0; i < TABLE_SIZE; i++)
    {
        int try = (index + i) % TABLE_SIZE;
        if(hash_table[try] == NULL) return NULL;
        if(hash_table[try] == DELETED_NODE) continue;
        if(strcmp(hash_table[index]->key, key) == 0)
        {
            hash_t *temp = hash_table[try];
            hash_table[try] = DELETED_NODE;
            return temp;
        }
    }
    return NULL;
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