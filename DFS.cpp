#include "DFS.h"

DFS :: DFS() : Graph() {
    inits();
}

// prints all not yet visited vertices reachable from node
void DFS :: DFS_Algorithm(int node) {
    // Create a stack for dfs
    stack<int> stack;

    // Push the current source node
    stack.push(node);

    while (!stack.empty()) {

        // Pop a vertex from the stack
        int top = stack.top();
        stack.pop();


        // Stack may contain same item twice. So, we should take the not visited vertex
        if (!visited[top]) {
            cout << top << "->";
            visited[top] = true;
        }

        // Get all adjacent vertices of the popped vertex top
        // If the adjacent has not been visited, then push it to the stack
        for (auto i = adj[top].begin(); i != adj[top].end(); i++) {
            if (!visited[*i])
                stack.push(*i);
        }

        int row = top % V;
        int column = top / V;

        if (!stack.empty()) {

             if (top == stack.top() + 1 && !visited[stack.top()])
                this->cell->arr[column][row]->remove_LeftWall();

             else if (top + 1 == stack.top() && row != V-1 && !visited[stack.top()])
                this->cell->arr[column][row+1]->remove_LeftWall();

             else if (top + V == stack.top() && !visited[stack.top()])
                this->cell->arr[column][row]->remove_DownWall();

            else if (top == stack.top() + V && column != 0 && !visited[stack.top()])
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

