#include <iostream>
using namespace std;

void SXChen(int a[], int n) {
    int index, new_number;
    for (int i = 1; i < n; i++) {
        index = i;
        new_number = a[i];
        while (index > 0 && a[index - 1] > new_number) {
            a[index] = a[index - 1];
            index--;
        }
        a[index] = new_number;
    }
}

int main() {
    int a[] = {55, 30, 22, 11, 33, 60, 70};
    int n = 7;

    cout << "Mang ban dau: ";
    for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
    }
    cout << endl;

    SXChen(a, n);

    cout << "Mang sau khi SXChen: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
