#include <iostream>
#include "BST.h"

using namespace std;

int main()
{
    BST t;

    t.put(25);
    t.put(40);
    t.put(5);
    t.put(15);
    t.put(20);
    t.put(30);
    t.put(10);
    t.put(35);

    cout << t.isBinarySearchTree() << endl;

    t.preorder();
    cout << endl;

    t.inorder();
    cout << endl;

    t.postorder();
    cout << endl;

    t.deleteValue(20);

    t.preorder();
    cout << endl;

    t.inorder();
    cout << endl;

    t.postorder();
    cout << endl;
    return 0;
}
