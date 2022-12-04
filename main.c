/**
 * this file contains the main function
 * @version 1.0, 8 December 2022
 * @autors Lior Vinman (ID: 213081763) & Daniel Bespalov (ID: 213446479)
 */

// including libraries
#include <stdio.h>
#include "my_mat.h"



/**
 * this is the main function. it gets an character as input from the user and performs:
 *	A -> absorbs 100 (10x10) integers for the adjacency matrix of the graph
 *	B -> absorbs two integers that represents vertices, prints T if exists path between them, else prints F
 *	C -> absorbs two integers that represents vertices, prints the shortest path between them if exists, else prints -1
 *	D (and others, but we assume valid input) -> exits the program 
 * @return 0 iff entered D , -1 iff entered invalid input
 */
int main()
{
	int adjMat[V][V] = {0};
	char option = '\0';
	option = getchar();
	while(option != 'D')
	{
		switch(option)
		{
			case 'A':
				inputMat(adjMat);
				break;
			case 'B':
				isPathExists(adjMat);
				break;
			case 'C':
				shortestPath(adjMat);
				break;
			case 'D':
				return 0;
				break;
		}
		option = getchar();
	}
	return -1;
}
