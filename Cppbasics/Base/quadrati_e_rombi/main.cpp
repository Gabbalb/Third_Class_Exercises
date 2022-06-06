#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int n;
    cin >> n;
    if (n >= 0){
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << "x";
            }
            cout<< endl;
        }
    }
    int pari = abs(n);
    if (n < 0 && pari%2 == 0){
        for (int i = 0; i < pari; ++i) {
            if (i == pari -1 || i == 0 ){
                for (int j = 0; j < pari; ++j) {
                    cout << "x";
                }
            cout << endl;
            }
            else {
                cout << "x";
                for (int j = 0; j < pari - 2; ++j) {
                    cout << " ";
                }
                cout << "x";
                cout << endl;
            }
        }
    }
    if (n < 0 && pari%2 != 0){
        int righe = pari/2, spazi = pari/2, x = 1;
        for (int i = 0; i < righe ; ++i) {
            for (int j = 0; j < spazi; ++j) {
                cout << " ";
            }
            spazi -= 1;
            for (int j = 0; j < x; ++j) {
                cout << "x";
            }
            x += 2;
            cout << endl;
        }
        for (int i = 0; i < pari; ++i) {
            cout << "x";
        }
        cout << endl;
        spazi = 1;
        righe = pari/2;
        x = pari - 2;
        for (int i = 0; i < righe ; ++i) {
            for (int j = 0; j < spazi; ++j) {
                cout << " ";
            }
            spazi += 1;
            for (int j = 0; j < x; ++j) {
                cout << "x";
            }
            x -= 2;
            cout << endl;
        }
    }
    return 0;
}
