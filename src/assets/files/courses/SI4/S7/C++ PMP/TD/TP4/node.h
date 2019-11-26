#ifndef _NODE_H_
#define _NODE_H_
#include <iostream>
#include <string>
#include <vector>

class Node
{
private:
    int value;
    Node *left_child = nullptr;
    Node *right_child = nullptr;

public:
    Node(int value);
    Node(const Node& node);

    ~Node();
    
    friend std::ostream &operator<<(std::ostream &os, const Node &p);

    void setLeftChild(Node *left_child = nullptr);
    void setRightChild(Node *right_child = nullptr);

    Node *getLeftChild();
    Node *getRightChild();

    int getValue();

    void removeAllChilds();
    std::vector<Node> iteratorLeftHand();
};

#endif