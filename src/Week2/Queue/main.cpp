#include "Queue.h"
#include <iostream>
using namespace std;

int main() {

    QueueList q1;
    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    cout << q1.front() << endl;
    cout << q1.dequeue() << endl;
    cout << q1.size() << endl;

    QueueLinkedList q2;
    q2.enqueue(10);
    q2.enqueue(20);
    q2.enqueue(30);
    cout << q2.front() << endl;
    cout << q2.dequeue() << endl;
    cout << q2.size() << endl;

    return 0;
}
