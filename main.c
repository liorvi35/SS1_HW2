/**
 * this file contains the main function
 * @version 1.0, 8 December 2022
 * @autors Lior Vinman (ID: 213081763) & Daniel Bespalov (ID: 213446479)
 */

// including libraries
#include <stdio.h>
#include "my_mat.h"

// defining constans
#define V 10

/**
 * this is the main function. it gets an character as input from the user and performs:
 *	A -> absorbs 100 (10x10) integers for the adjacency matrix of the graph
 *	B -> absorbs two integers that represents vertices, prints T if exists path between them, else prints F
 *	C -> absorbs two integers that represents vertices, prints the shortest path between them if exists, else prints -1
 *	D (and others, but we assume valid input) -> exits the program 
 * @return 0
 */
int main()
{
	int adjMat[V][V], i = 0, j = 0;
	char c = 'a';
	c = getchar();
	while(c != 'D')
	{
		switch(c)
		{
			case 'A':
				for(i = 0; i < V; i++)
					for(j = 0; j < V; j++)
						scanf("%d", &adjMat[i][j]);
				break;
			case 'B':
				scanf("%d %d", &i, &j);
				printf("%s", FW(adjMat, i, j) != 0 ? "TRUE" : "FALSE");
				break;
			case 'C':
				scanf("%d %d", &i, &j);
				printf("%d", FW(adjMat, i, j) != 0 ? FW(adjMat, i, j) : -1);
				break;
		}
		c = getchar();
	}
	return 0;
}
