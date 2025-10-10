#include <iostream>
#include "MaxBinaryHeap.h"
using namespace std;

class PriorityQueue {
private:
    MaxBinaryHeap heap;

public:
    void insert(int value) {
        heap.insert(value);
    }

    int delMax() {
        return heap.delMax();
    }

    bool isEmpty() {
        return heap.isEmpty();
    }

    int max() {
        return heap.max();
    }

    int size() {
        return heap.getSize();
    }
};

int main() {
    PriorityQueue pq;

    pq.insert(10);
    pq.insert(30);
    pq.insert(20);

    cout << "Max: " << pq.max() << endl;
    cout << "Size: " << pq.size() << endl;

    cout << "Xoa max: " << pq.delMax() << endl;
    cout << "Max moi: " << pq.max() << endl;

    cout << "PQ rong? " << pq.isEmpty() << endl;

    return 0;
}

