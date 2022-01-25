#ifndef MAZE_GENERATOR_NODE_H
#define MAZE_GENERATOR_NODE_H

#include <string>

using namespace std;

class Node {
    public:
       int data;
       Node(int data);
       Node* next;
};

#endif //MAZE_GENERATOR_NODE_H
