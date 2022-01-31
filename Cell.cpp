#include <iostream>
#include "Cell.h"
#include <chrono>
#include <thread>

using namespace std::this_thread;     // sleep_for, sleep_until
using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
using std::chrono::system_clock;

Cell :: Cell() {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            int data = j*V + i;
            arr[i][j] = createNode(data);
        }
    }
}

void Cell :: printInitialMaze() {

    for (int k = 0; k < COLUMN; k++)
        cout << " __";
    cout << endl;

    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            sleep_for(1ns);
            sleep_until(system_clock::now() + 0.0012s);
            cout << arr[i][j]->getBox();
        }
        cout << "|" << endl;
    }
}

Node* Cell :: createNode(int data) {
    Node* node = new Node(data);

    return node;
}

