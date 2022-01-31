#include "Graph.h"
#include "Cell.h"

Graph :: Graph() {
    this->cell = new Cell();
    init();
    //printGraph();
    //cell->printInitialMaze(); // Printing the maze
}

void Graph :: printMaze() {
    cell->printInitialMaze();
}

// Adding undirected edges to the graph
void Graph ::addEdge(int node_1, int node_2) {
    adj[node_1].push_back(node_2);
    adj[node_2].push_back(node_1);

}

// For initializing all the graph's stuffs
void Graph :: init() {
    int count = 0;

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (j < V-1)
                addEdge(count,count+1);

            if (count < (V*V-V))
                addEdge(count,count+V);
            count++;
        }
    }
}

void Graph ::printGraph() {
    for (int i = 0; i < V*V; i++) {
        cout << "\nAdjacency list of vertex " << i << "\n head";

        for (auto x : adj[i])
            cout << "-> " << x;
        printf("\n");
    }
}

