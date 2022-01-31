#ifndef MAZE_GENERATOR_DFS_H
#define MAZE_GENERATOR_DFS_H

#include <stack>
#include "Graph.h"

class DFS : Graph {
    public:
       int visited[V*V];
       DFS();
       void DFS_Algorithm(int node);
       void inits();
       void print();
};

#endif //MAZE_GENERATOR_DFS_H
