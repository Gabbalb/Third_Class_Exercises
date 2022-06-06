#include <iostream>
using namespace std;
int main() {
    int p = 10, a = 3, r = 3;
    /*
    cout << "inserisci l'ampiezza" <<endl;
    cin >> a;
    cout << "inserisci il periodo" <<endl;
    cin >> p;
    cout << "inserisci le ripetizioni" <<endl;
    cin >> r;
     */
    //prima riga
    cout << "  ";
    for (int i = 0; i < r; ++i) {
        int n_aste = p / 2 + 1;
        int n_spazi = p / 2 - 1;
        for (int j = 0; j < n_aste; ++j) {
            cout << "*";
        }
        for (int j = 0; j < n_spazi; ++j) {
            cout << " ";
        }
    }
        for (int i = 0; i < a; ++i) {
            cout << "  ";
            for (int j = 0; j < r*2; ++j) {
                cout << "*";
                for (int k = 0; k < p/2 - 1; ++k) {
                    cout << " ";
                }
            }
            cout << endl;
        }

    for (int i = 0; i < p*r + 4; ++i) {
        cout << "*";
    }
    cout <<endl;

    for (int i = 0; i < a; ++i) {
        cout << "   ";
        for (int j = 0; j < r*2; ++j) {
            for (int k = 0; k < p/2 - 1; ++k) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < r; ++i) {
        int n_aste = p / 2 + 1;
        int n_spazi = p / 2 - 1;
        for (int j = 0; j < n_aste; ++j) {
            cout << "*";
        }
        for (int j = 0; j < n_spazi; ++j) {
            cout << " ";
        }
    }
    return 0;
}
