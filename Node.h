#ifndef MAZE_GENERATOR_NODE_H
#define MAZE_GENERATOR_NODE_H

#include <string>

#define V 10  // Vertex

using namespace std;

class Node {
    public:
       int data;
       string leftWall;
       string downWall;
       string getBox();
       void remove_DownWall();
       void remove_LeftWall();
       Node(int data);
};

#endif //MAZE_GENERATOR_NODE_H
