/**
 * this file contains the declarations of the fanctions from my_mat.c and constants that will be in use (i.e. its a libray)
 * @version 1.0, 8 December 2022
 * @authors Lior Vinman (ID: 213081763) & Daniel Bespalov (ID: 213446479)
 */

// defining constans
#define V 10
#define INF 10*10*10*10*10*10*10

// defining functions
int FW(int[V][V], int, int);
void inputMat(int[V][V]);
void isPathExists(int[V][V]);
void shortestPath(int[V][V]);
