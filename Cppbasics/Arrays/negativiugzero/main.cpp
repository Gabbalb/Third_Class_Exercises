#include <iostream>

using namespace std;

int main() {
    const int MAX = 8;
    int v[MAX];

    for (int i = 0; i < MAX; ++i) {
        cin >> v[i];
    }
    int somma = 0;

    for (int i = 0; i < MAX; ++i) {
        if (v[i] < 0){
            somma += v[i];
            v[i] = 0;
        }
    }
    cout << somma;
    return 0;
}
