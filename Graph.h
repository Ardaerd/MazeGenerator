#ifndef MAZE_GENERATOR_GRAPH_H
#define MAZE_GENERATOR_GRAPH_H

#include <vector>
#include "Node.h"
#include "Cell.h"

#define V 4  // Vertex

class Graph {
    public:
       vector<int> adj[V*V];
       void addEdge(int node_1, int node_2);
       void init();
       void printGraph();
       Node* createNode(int data);
       Graph();
};

#endif //MAZE_GENERATOR_GRAPH_H
