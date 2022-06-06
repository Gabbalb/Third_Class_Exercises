#include <iostream>

using namespace std;

void Scambio (int max, int v[] ){
    int flag;
    for (int i = 0; i < max/2; ++i) {
        flag = v[i];
        v[i] = v[max - i];
        v[max - i] = v[i];
    }
}

int main() {
    const int N = 100;
    int v[N];

    for (int i = 0; i < N; ++i) {
        v[i] = i;
    }
    Scambio(N, v);

    for (int i = 0; i < N; ++i) {
        cout << v[i] << endl;
    }


    return 0;
}
