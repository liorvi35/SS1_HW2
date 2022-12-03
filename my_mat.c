/**
 * this file contains all the funtions that will be used in main
 * @version 1.0, 8 December 2022
 * @authors Lior Vinman (ID: 213081763) & Daniel Bespalov (ID: 213446479)
 */


// indluding libraries
#include <stdio.h>
#include "my_mat.h"

// declaring functions
int FW(int adj[10][10], int u, int v);

/**
 * this funtion is implementation of Floyd Warshall algorithm
 * @param adj[10][10] - adjacency matrix that represents undirected graph with ten vertices
 * @param u - first vertice from the graph
 * @param v - second vertice from the graph
 * @return the shortest path from u to v
 */
int FW(int adj[10][10], int u, int v)
{
    int dist[10][10], i = 0, j = 0, k = 0;
    for(i = 0; i < 10; i++)
        for(j = 0; j < 10; j++)
            dist[i][j] = adj[i][j];
    for(i = 0; i < 10; i++)
        dist[i][i] = 0;
    for(k = 0; k < 10; k++)
        for(i = 0; i < 10; i++)
            for(j = 0; j < 10; j++)
                if(dist[i][j] > dist[i][k] + dist[k][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
    return dist[u][v];
}
