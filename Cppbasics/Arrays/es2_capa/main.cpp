#include <iostream>

using namespace std;

bool ricerca_numero (int n, int &numero, int m[][5], int DIM){
    bool present;
    for (int i = 0; i < DIM; ++i) {
        for (int j = 0; j < DIM; ++j) {
            if (m[i][j] == n){
                present = true;
                numero++;
            } else {
                present = false;
            }
        }
    }
    if (!present){
        return false;
    } else {
        return true;
    }
}


int main() {
    int n = 4;
    int m[5][5];
    int numero = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            m[i][j] = rand()%10;
        }
    }

    if (ricerca_numero(n, numero, m, 5)){
        cout << "è presente " << numero << " volte" << endl;
    } else
        cout << "non è presente" << endl;

    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
