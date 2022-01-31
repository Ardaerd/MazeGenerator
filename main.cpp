#include <iostream>
#include "DFS.h"


int main() {

    DFS* dfs = new DFS();
    dfs->DFS_Algorithm(0);
    cout << endl;
    dfs->print();

    return 0;
}
