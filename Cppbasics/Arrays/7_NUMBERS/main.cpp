#include <iostream>

using namespace std;

int main() {

    const int MAX = 7;
    int v[MAX];

    for (int i = 0; i < MAX; ++i) {
        cin >> v[i];
    }

    int zero = 0;

    for (int i = 0; i < MAX; ++i) {
        if (v[i] == 0)
            zero++;
    }

    cout << zero;
    return 0;
}
