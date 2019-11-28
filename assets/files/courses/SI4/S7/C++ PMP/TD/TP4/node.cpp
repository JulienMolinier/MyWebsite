#include "node.h"
#include <vector>
#include <iostream>

Node::Node(int value)
{
    this->value = value;
}

void Node::setLeftChild(Node *left_child)
{
    this->left_child = left_child;
}

void Node::setRightChild(Node *right_child)
{
    this->right_child = right_child;
}

Node *Node::getLeftChild()
{
    return this->left_child;
}

Node *Node::getRightChild()
{
    return this->right_child;
}

int Node::getValue()
{
    return this->value;
}

void Node::removeAllChilds()
{
    this->left_child = nullptr;
    this->right_child = nullptr;
}

std::vector<Node> Node::iteratorLeftHand()
{
    std::vector<Node> res = {};
    if (this->left_child == nullptr)
    {
        std::vector<Node> res2 = this->right_child->iteratorLeftHand();
        res.insert(res.end(), res2.begin(), res2.end());
    }
    res.push_back(*this);
    if (this->right_child == nullptr)
    {
        std::vector<Node> res2 = this->left_child->iteratorLeftHand();
        res.insert(res.end(), res2.begin(), res2.end());
    }
    return res;
};

std::ostream &operator<<(std::ostream &os, const Node &p)
{
    os << "Value: " << p.value << "\n";
    if (p.left_child != nullptr)
    {
        os << "Left_child: " << p.left_child->value << "\n";
    }
    if (p.right_child != nullptr)
    {
        os << "Right_child: " << p.right_child->value;
    }

    return os;
}

// Node::Node(const Node &node) : value(node.value), left_child(node.left_child), right_child(node.right_child) {}

Node::Node(const Node &node) : value(node.value), left_child(new Node(*node.left_child)), right_child(new Node(*node.right_child)) {}

Node::~Node()
{
    delete left_child;
    delete right_child;
}