#include "DFS.h"
#include <algorithm>
#include <random>

DFS :: DFS() : Graph() {
    inits();
}

// prints all not yet visited vertices reachable from node
void DFS :: DFS_Algorithm(int node) {
    // Create a stack for dfs
    stack<int> stack;

    this->cell->arr[node/V][node%V]->remove_LeftWall();

    srand(time(0));

    // Push the current source node
    stack.push(node);

    while (!stack.empty()) {

        // Pop a vertex from the stack
        int top = stack.top();
        //stack.pop();


        // Stack may contain same item twice. So, we should take the not visited vertex
        if (!visited[top]) {
            visited[top] = true;
        }
        cout << top << "->";


        // Get all adjacent vertices of the popped vertex top
        // If the adjacent has not been visited, then push it to the stack


        int rand[4];
        int count = 0;

        for (int i = 0; i < 4; i++) {
            rand[i] = -1;
        }

        bool check = true;
        while (check) {
            for (auto i = adj[top].begin(); i != adj[top].end(); i++) {
                if (!visited[*i]) {
                    rand[count] = *i;
                    count++;
                    check = false;
                }
            }
            if (check == true) {
                stack.pop();
                if (stack.empty())
                    return;
                top = stack.top();
            }
        }


        int num = std::rand() % 4;

        while (rand[num] == -1)
            num = std::rand() % 4;

        if (!visited[rand[num]]) {
            stack.push(rand[num]);
            visited[rand[num]] = true;
        }

//        auto engine = std::default_random_engine{};
//        std::shuffle(std::begin(adj[top]), std::end(adj[top]), engine);
//
//
//
//        for (auto i = adj[top].begin(); i != adj[top].end(); i++) {
//            if (!visited[*i]) {
//                stack.push(*i);
//                break;
//            }
//        }


        int row = top % V;
        int column = top / V;

        if (!stack.empty()) {

             if (top == stack.top() + 1)
                this->cell->arr[column][row]->remove_LeftWall();

             else if (top + 1 == stack.top() && row != V-1)
                this->cell->arr[column][row+1]->remove_LeftWall();

             else if (top + V == stack.top())
                this->cell->arr[column][row]->remove_DownWall();

            else if (top == stack.top() + V && column != 0)
                this->cell->arr[column-1][row]->remove_DownWall();
        }
    }
    cout << endl;
}

void DFS :: inits() {
    cout << "it is working" << endl;
    for (int i = 0; i < V*V; i++)
        this->visited[i] = false;
}

void DFS :: print() {
    printMaze();
}
