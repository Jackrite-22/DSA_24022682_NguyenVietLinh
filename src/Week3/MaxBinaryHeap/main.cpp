#include <iostream>
using namespace std;

class MaxBinaryHeap {
private:
    int a[100];
    int size;

public:
    MaxBinaryHeap() {
        size = 0;
    }

    void swim(int k) {
        while (k > 0 && a[k] > a[(k - 1) / 2]) {
            swap(a[k], a[(k - 1) / 2]);
            k = (k - 1) / 2;
        }
    }

    void sink(int k) {
        while (2 * k + 1 < size) {
            int j = 2 * k + 1;
            if (j + 1 < size && a[j + 1] > a[j]) {
                j++;
            }

            if (a[k] >= a[j]) break;

            swap(a[k], a[j]);
            k = j;
        }
    }

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return size == 0;
    }

    int max() {
        if (isEmpty()) {
            cout << "Heap rong";
            return -1;
        }
        return a[0];
    }

    void insert(int data) {
        if (size >= 100) {
            cout << "Heap full";
            return;
        }
        a[size] = data;
        swim(size);
        size++;
    }

    int delMax() {
        if (isEmpty()) {
            cout << "Heap rong";
            return -1;
        }
        int maxVal = a[0];
        a[0] = a[size - 1];
        size--;
        sink(0);
        return maxVal;
    }
};

int main() {
    MaxBinaryHeap h;

    h.insert(10);
    h.insert(40);
    h.insert(30);
    h.insert(50);
    h.insert(20);

    cout << "Max = " << h.max() << endl;

    cout << "Xoa max: " << h.delMax() << endl;
    cout << "Max moi = " << h.max() << endl;

    return 0;
}
