#ifndef MAZE_GENERATOR_CELLS_H
#define MAZE_GENERATOR_CELLS_H

#include <string>

#define ROW 4
#define COLUMN 4

using namespace std;

class Cell {
    public:
       string arr[ROW][COLUMN];
       Cell();
       void printInitialMaze();
};

#endif //MAZE_GENERATOR_CELLS_H
