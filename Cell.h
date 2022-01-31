#ifndef MAZE_GENERATOR_CELLS_H
#define MAZE_GENERATOR_CELLS_H

#include <string>
#include "Node.h"

#define ROW V
#define COLUMN V

using namespace std;

class Cell {
    public:
       Node* arr[ROW][COLUMN];
       Cell();
       Node* createNode(int data);
       void printInitialMaze();
};

#endif //MAZE_GENERATOR_CELLS_H
