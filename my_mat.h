/**
 * this file contains the declarations of the fanctions from my_mat.h (i.e. its a libray)
 * @version 1.0, 8 December 2022
 * @authors Lior Vinman (ID: 213081763) & Daniel Bespalov (ID: 213446479)
 */

// defining constans
#define V 10
#define INF 10*10*10*10*10*10*10

// defining functions
int FW(int adj[10][10], int u, int v);
void inputMat(int mat[10][10]);
void isPathExists(int mat[10][10]);
void shortestPath(int mat[10][10]);
