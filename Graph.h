#ifndef MAZE_GENERATOR_GRAPH_H
#define MAZE_GENERATOR_GRAPH_H

#include <vector>
#include "Cell.h"
#include <iostream>

class Graph {
    public:
       vector<int> adj[V*V];
       void addEdge(int node_1, int node_2);
       void init();
       void printGraph();
       Node* createNode(int data);
       Graph();
       void printMaze();
       Cell* cell;
};

#endif //MAZE_GENERATOR_GRAPH_H
