#include <iostream>

using namespace std;

void scambio (int v[], int DIM){
    int flag;
    for (int i = 0; i < DIM/2; i++) {
        flag = v[i];
        v[i] = v[DIM - i-1];
        v[DIM - i-1] = flag;
    }
}

int main() {
    const int DIM = 10;
    int v[DIM];

    int n;
    do {
        cin >> n;
    } while (n%2 != 0);


    for (int i = 0; i < n; ++i) {
        v[i] = i;
    }

    scambio(v, n);

    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }

    return 0;
}
