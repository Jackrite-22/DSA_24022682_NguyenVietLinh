#include <iostream>
using namespace std;

void SXLuaChon(int list[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (list[j] < list[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            int temp = list[i];
            list[i] = list[minIndex];
            list[minIndex] = temp;
        }
    }
}

int main() {
    int list[] = {55, 30, 22, 11, 33, 60, 70};
    int n = 7;

    cout << "Mang ban dau: ";
    for (int i = 0; i < n; i++)
    cout << list[i] << " ";
    cout<< endl;

    SXLuaChon(list, n);

    cout << "Mang sau khi SXLuaChon: ";
    for (int i = 0; i < n; i++)
    cout << list[i] << " ";

    return 0;
}
