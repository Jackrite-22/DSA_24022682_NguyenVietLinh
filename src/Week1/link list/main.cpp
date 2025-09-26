#include<iostream>
#include "linklist.h"
using namespace std;
int main(){
    LinkedList x;
    x.ChenVaoDau(2);
    x.ChenVaoCuoi(3);
    x.ChenVaoCuoi(4);
    x.ChenVaoCuoi(5);
    x.ChenVaoCuoi(6);
    x.DuyetXuoi();
    x.DuyetNguoc();
}
