#include <iostream>
#include "stack.h"
using namespace std;

int main() {

    StackList s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout << "Top (List): " << s1.top() << endl;
    cout << "Pop (List): " << s1.pop() << endl;
    cout << "Size (List): " << s1.size() << endl;

    StackLinkList s2;
    s2.push(10);
    s2.push(20);
    s2.push(30);
    cout <<  s2.top() << endl;
    cout <<  s2.pop() << endl;
    cout <<  s2.size() << endl;

    return 0;
}
