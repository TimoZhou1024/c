#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
typedef struct Node {
    char word[50];
    int count;
    struct Node* next;
} Node;
void insertNode(Node** head, char* word) {
    Node* current = *head;
    Node* prev = NULL;
    while (current != NULL && strcmp(current->word, word) < 0) {
        prev = current;
        current = current->next;
    }
    if (current != NULL && strcmp(current->word, word) == 0) {
        current->count++;
        return;
    }
    Node* newNode = (Node*)malloc(sizeof(Node));
    strcpy(newNode->word, word);
    newNode->count = 1;
    newNode->next = NULL;
    if (prev == NULL) {
        newNode->next = *head;
        *head = newNode;
    } else {
        newNode->next = current;
        prev->next = newNode;
    }
}
void printWordCount(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%s %d\n", current->word, current->count);
        current = current->next;
    }
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    Node* head = NULL;
    char* token = strtok(str, " ");
    while (token != NULL) {
        int isUpperCase = isupper(token[0]);
        for (int i = 0; token[i] != '\0'; i++) {
            token[i] = tolower(token[i]);
        }
        if (isUpperCase) {
            token[0] = toupper(token[0]);
        }

        insertNode(&head, token);
        token = strtok(NULL, " ");
    }
    printWordCount(head);
    Node* current = head;
    while (current != NULL) {
        Node* next = current->next;
        free(current);
        current = next;
    }

    return 0;
}