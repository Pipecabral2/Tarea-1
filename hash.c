#include "hash.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int hash(char* key) {
    unsigned int h = 0;
    for (int i = 0; key[i]; i++)
        h = (h + key[i]) % TABLE_SIZE;
    return h;
}

void initHash(HashTable* ht) {
    for (int i = 0; i < TABLE_SIZE; i++)
        ht->table[i] = NULL;
}

void insert(HashTable* ht, char* key, int value) {
    unsigned int idx = hash(key);
    Node* newNode = malloc(sizeof(Node));
    newNode->key = strdup(key);
    newNode->value = value;
    newNode->next = ht->table[idx];
    ht->table[idx] = newNode;
}

int search(HashTable* ht, char* key) {
    unsigned int idx = hash(key);
    Node* curr = ht->table[idx];
    while (curr) {
        if (strcmp(curr->key, key) == 0)
            return curr->value;
        curr = curr->next;
    }
    return -1;
}

void delete(HashTable* ht, char* key) {
    unsigned int idx = hash(key);
    Node* curr = ht->table[idx];
    Node* prev = NULL;
    while (curr) {
        if (strcmp(curr->key, key) == 0) {
            if (prev) prev->next = curr->next;
            else ht->table[idx] = curr->next;
            free(curr->key);
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}

void printHash(HashTable* ht) {
    for (int i = 0; i < TABLE_SIZE; i++) {
        printf("[%d] -> ", i);
        Node* curr = ht->table[i];
        while (curr) {
            printf("(%s:%d) -> ", curr->key, curr->value);
            curr = curr->next;
        }
        printf("NULL\n");
    }
}
