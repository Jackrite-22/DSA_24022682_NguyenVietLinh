#include <iostream>
#include "SymbolTable.h"

using namespace std;

int main()
{
    SymbolTableL s;

    s.put("C", 30);
    s.put("E", 50);
    s.put("B", 20);
    s.put("D", 40);
    s.put("A", 10);

    cout << s.keyMin() << endl;

    cout << s.keyMax() << endl;

    cout << s.rank("E") << endl;
    cout << s.rank("Z") << endl;

    cout << s.floor("B") << endl;
    cout << s.ceiling("D") << endl;
    cout << s.floor("A") << endl;
    cout << s.ceiling("E") << endl;
    cout << s.floor("Z") << endl;
    cout << s.ceiling("Z") << endl;

    s.deleteMin();
    s.deleteMax();

    cout << s.keyMin() << endl;
    cout << s.keyMax() << endl;

    cout << s.size("B", "D") << endl;
    cout << s.size("A", "C") << endl;
    cout << s.size("X", "Z") << endl;
    return 0;
}
