#include <iostream>

using namespace std;

bool ricerca (int NUMERI, int n, int v[] ){

    for (int i = 0; i < NUMERI; ++i) {
        if (v[i] == n)
            return true;
    }
    return false;

}

int main() {

    const int NUMERI = 10;
    int v[NUMERI];
    int n;
    bool trovato = false;

    //riempio il vettore
    for (int i = 0; i < NUMERI; ++i) {
        //al posto che prendere da tastiera generiamo numeri pari da 0 a 18 per evitare p
        v[i] = i * 2;
    }

    cout << "inserisci il numero da cercare: ";
    cin >> n;


    while (n != 0) {

        if (ricerca(NUMERI, n, v)) {
            cout << "il numero è presente nel vettore" << endl;
        } else {
            cout << "in numero non è presente nel vettore" << endl;
        }

        cout << "inserisci il numero da cercare: ";
        cin >> n;

    }
    return 0;
}
