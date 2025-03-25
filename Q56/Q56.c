#include <stdio.h>

#define MAX 10

int graph[MAX][MAX], visited[MAX], vertices;

void DFS(int vertex)
{
    printf("%d ", vertex);
    visited[vertex] = 1;
    
    for (int i = 0; i < vertices; i++) {
        if (graph[vertex][i] == 1 && !visited[i]) {
            DFS(i);
        }
    }
}

int main() {
    printf("Enter number of vertices: ");
    scanf("%d", &vertices);
    
    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    for (int i = 0; i < vertices; i++) {
        visited[i] = 0;
    }

    printf("DFS Traversal: ");
    DFS(0);
    
    return 0;
}
