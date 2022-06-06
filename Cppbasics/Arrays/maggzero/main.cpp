#include <iostream>

using namespace std;

int main() {

    const int MAX = 8;
    int v[MAX];

    for (int i = 0; i < MAX; ++i) {
        do {
            cin >> v[i];
        }while (v[i] <= 0);
    }

    for (int i = 0; i < MAX; ++i) {
        cout << v[i] << endl;
    }

    return 0;
}
