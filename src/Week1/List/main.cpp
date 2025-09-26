#include <iostream>
#include "List.h"
using namespace std;

int main() {
    List x;


    x.ChenVaoCuoi(10);
    x.DuyetXuoi();


    x.ChenVaoDau(5);
    x.DuyetXuoi();

    x.ChenVaoViTri(2, 15);

    x.DuyetXuoi();
    x.TruyCap(0);

    x.XoaDau();
    x.DuyetXuoi();


    x.XoaCuoi();
    x.DuyetXuoi();


    x.XoaViTri(1);
    x.DuyetXuoi();


    x.DuyetNguoc();

    return 0;
}
