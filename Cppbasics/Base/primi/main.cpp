#include <iostream>
using namespace std;

/**
 * funzione che determina se un numero è primo o no
 * @param n il numero da verificare
 * @return true se il numero è primo false altrimenti
 */
bool primo(int n){
    int cont =0;
    for (int i = 2; i <= (n/2) ; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, contatore=0, prec= 0;
    cout << "inserisci il numero n: ";
    cin >> n;

        for (int i = 2; i <= n; ++i) {
            if (primo(i)) //oppure if (primo(i) == true)
                contatore++;
            if (i%1000 == 0) {
                cout << i << ": " << contatore << " " << contatore - prec << endl;
                prec = contatore;
            }
        }

    return 0;
}
