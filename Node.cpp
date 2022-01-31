#include "Node.h"

Node :: Node(int data) {
    this->data;
    this->downWall = "__";
    this->leftWall = "|";
}

string Node :: getBox() {
    return leftWall + downWall;
}

void Node ::remove_DownWall() {
    this->downWall = "  ";
}

void Node ::remove_LeftWall() {
    this->leftWall = " ";
}

