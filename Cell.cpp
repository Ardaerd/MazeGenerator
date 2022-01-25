#include <iostream>
#include "Cell.h"

Cell :: Cell() {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            arr[i][j] = "|__";
        }
    }
}

void Cell :: printInitialMaze() {

    for (int k = 0; k < COLUMN; k++)
        cout << " __";
    cout << endl;

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            cout << arr[i][j];
        }
        cout << "|" << endl;
    }
}

