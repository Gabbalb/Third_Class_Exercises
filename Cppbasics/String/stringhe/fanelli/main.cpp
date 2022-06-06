#include <iostream>

using namespace std;

int main() {
    const int DIM = 9;
    string v[DIM];

    for (int i = 0; i < DIM; ++i) {
        cout << "parola " << i + 1 << endl;
        cin >> v[i];
    }
    string support;
    for (int i = 0; i < DIM; ++i) {
        support = v[i];
        for (int j = 0; j < support.size()-1 ; ++j) {
            support.at(j) = '*';
        }
        v[i] = support;
    }

    for (int i = 0; i < DIM; ++i) {
        cout << v[i] << endl;
    }

    return 0;
}
