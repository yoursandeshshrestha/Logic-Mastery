#include <stdio.h>
#include <limits.h>

#define V 5  

int main() 
{
    int graph[V][V] = {
        {0, 10, 0, 30, 100},
        {10, 0, 50, 0, 0},
        {0, 50, 0, 20, 10},
        {30, 0, 20, 0, 60},
        {100, 0, 10, 60, 0}
    };

    int src = 0;  
    int dist[V];  
    int visited[V]; 

    for (int i = 0; i < V; i++) 
    {
        dist[i] = INT_MAX;
        visited[i] = 0;
    }
    dist[src] = 0; 

    for (int count = 0; count < V - 1; count++) 
    {
        int min = INT_MAX, u;

      
        for (int v = 0; v < V; v++) 
        {
            if (!visited[v] && dist[v] <= min) 
            {
                min = dist[v];
                u = v;
            }
        }

        visited[u] = 1; 

        
        for (int v = 0; v < V; v++) 
        {
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

  
    printf("Vertex \t Distance from Source\n");
    for (int i = 0; i < V; i++) 
    {
        printf("%d \t %d\n", i, dist[i]);
    }

    return 0;
}
