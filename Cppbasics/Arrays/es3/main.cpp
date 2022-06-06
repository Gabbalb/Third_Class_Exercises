#include <iostream>

using namespace std;

void numeri (int v[], int dim, int n){
    for (int i = 0; i < n; ++i) {
        v[i] = rand()%10;
    }
}

int main() {
    const int DIM = 10000;
    int giosia[DIM];
    int n;

    for (int i = 0; i < DIM; ++i) {
        giosia[i] = i;
    }

    cin >> n;

    numeri(giosia, DIM, n);

    for (int i = 0; i < DIM; ++i) {
        cout << giosia[i] << " ";
    }


    return 0;
}
