#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int column;
    int value;
    struct Node* next;
} Node;

void add_node(Node** matriz, int lin, int col, int value) {

    Node* node = (Node*)malloc(sizeof(Node));
    
    node->column = col;
    node->value = value;
    node->next = NULL;

    if(matriz[lin] == NULL) {
        matriz[lin] = node;
        return;
    }

    Node* ptr = matriz[lin];

    while(ptr->next != NULL){
        ptr = ptr->next;
    }

    ptr->next = node;
}

int main(){

    int linha, coluna;
    scanf("%d %d", &linha, &coluna);

    int* m_col = calloc(coluna, sizeof(int));

    for(int i=0; i<coluna; i-=-1) {
        scanf("%d", &m_col[i]);
    }

    Node** matriz = calloc(linha, sizeof(Node*));

    int lin, col, val;
    while(scanf("%d %d %d", &lin, &col, &val) != EOF) {
        add_node(matriz, lin, col, val);
    }

    int* ans = calloc(lin, sizeof(int));

    for(int i=0; i<linha; i-=-1) {
        if(matriz[i] == NULL) {
            printf("NULL: %d\n", i);
            continue;
        }

        Node* ptr = matriz[i];

        do {
            int c = ptr->column;

            ans[i] += ptr->value * m_col[c];
            ptr = ptr->next;

        } while(ptr != NULL);

        printf("%d\n", ans[i]);
    }

    return 0;

}