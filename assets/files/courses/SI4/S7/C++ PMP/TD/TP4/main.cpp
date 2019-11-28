#include <iostream>
#include "node.h"
#include "tree.h"

using std::cout;
using std::endl;

int main()
{
    // Node node1(1);
    // Node node2(2);
    // Node node3(3);

    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);

    // Node *node2ptr = &node2;
    // Node *node3ptr = &node3;

    // node1.setLeftChild(node2ptr);
    // node1.setRightChild(node3ptr);

    (*node1).setLeftChild(node2);
    (*node1).setRightChild(node3);

    cout << *node1 << endl;

    std::vector<Node> iterateLeft = (*node1).iteratorLeftHand();
    for (int i = 0; i < static_cast<int>(iterateLeft.size()); i++)
    {
        cout << iterateLeft.at(i) << endl;
    }

    delete node1;

    return 0;
}