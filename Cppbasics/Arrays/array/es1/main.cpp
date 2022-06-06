#include <iostream>
using namespace std;

void quadrati (int v[], int Max ){

    for (int i = 0; i < Max; ++i) {
       v[i] = v[i]*v[i];
    }

}

int main() {
    const int MAX = 10;
    int v[MAX];

    for (int i = 0; i < MAX; ++i) {
        v[i] = i;
    }

    quadrati(v, MAX);

    for (int i = 0; i < MAX; ++i) {
        cout << v[i] << " ";
    }
    return 0;
}
