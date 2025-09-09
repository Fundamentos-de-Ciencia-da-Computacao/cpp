#include <iostream>

using std::cout;
using std::endl;

int main() {

    int i = 2, j = 4, k= 8;
    int *p = &i, *q = &j, *r = &k;

    cout << "Valores Iniciais: " << i << j << k << *p << *q << *r << endl;

    cout << " " << endl;

    k = i;
    cout << i << j << k << *p << *q << *r << endl;

    cout << " " << endl;

    p = q;
    cout << i << j << k << *p << *q << *r << endl;

    cout << " " << endl;

    *q = *r;
    cout << i << j << k << *p << *q << *r << endl;

    return 0;

}