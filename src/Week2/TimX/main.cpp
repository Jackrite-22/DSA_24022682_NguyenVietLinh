#include <iostream>

using namespace std;

bool TimX(int a[], int n, int x){
    for(int i = 0; i < n; i++){
        if(a[i] == x)
            return true;
    }
    return false;
}

int main(){
    int a[7] = {55, 30, 22, 11, 33, 60, 70};
    int n = 7, x = 33;
    if(TimX(a, n, x)){
        cout << "FOUND";
    }
    else{
        cout << "NOT FOUND";
    }
}
