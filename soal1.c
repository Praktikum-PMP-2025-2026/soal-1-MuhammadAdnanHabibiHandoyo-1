/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 4 - Dynamic Structures
 *   Hari dan Tanggal    : Rabu, 6/05/2026
 *   Nama (NIM)          : Muhammad Adnan Habibi Handoyo/13224093
 *   Nama File           : soal1-4.c
 *   Deskripsi           : Program menerima id dan durasi kemudian memberikan output
 *                         urutan queue dan total durasi
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char nama[50];
    int durasi;
    struct Node* next;
} Node;

int main(){
    int n;
    scanf("%d",&n);
    
    Node *head = NULL;
    Node *temp = NULL;

    for (int i = 0; i<n; i++){
        Node* newNode = (Node*)malloc(sizeof(Node));
        scanf ("%s %d", newNode->nama, &newNode->durasi);
        newNode->next = NULL;
        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    printf("ORDER");

    Node *arr = head;
    int total = 0;
    int durasi = 0;

    for (int i = 0; i <n; i++){
        printf(" %s",arr->nama);
        total += durasi;
        durasi += arr->durasi;
        
        Node *temp = arr;
        arr = arr->next;
        free (temp);
    }

    printf("\n");
    printf("WAIT %d\n",total);
    return 0;
}
