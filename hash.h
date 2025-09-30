#ifndef HASH_H
#define HASH_H

#define TABLE_SIZE 10

typedef struct Node {
    char* key;
    int value;
    struct Node* next;
} Node;

typedef struct {
    Node* table[TABLE_SIZE];
} HashTable;

unsigned int hash(char* key);
void initHash(HashTable* ht);
void insert(HashTable* ht, char* key, int value);
int search(HashTable* ht, char* key);
void delete(HashTable* ht, char* key);
void printHash(HashTable* ht);

#endif
