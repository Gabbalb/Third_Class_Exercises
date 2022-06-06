#include <iostream>

using namespace std;

int main() {
    const int MAX = 10;
    int v[MAX];

    for (int i = 0; i < MAX; ++i) {
        v[i] = 0;
    }

    int pos = 0;
    int n;
    cin >> n;
    v[n] = 1;

    for (int i = 0; i < MAX ; ++i) {
        if (v[i] == 1){
            break;
        }
        pos++;
    }
    cout << pos;
    return 0;
}
