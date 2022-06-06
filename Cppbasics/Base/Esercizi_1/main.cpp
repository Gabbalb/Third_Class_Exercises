#include <iostream>

//prezzo
using namespace std;

int main() {
    int pezzi ;
    float prezzo, sconto, somma = 0;
    do {
        cout << "inserisci il numero di pezzi" <<endl;
        cin >> pezzi;
    } while (pezzi <= 0);

    do {
        cout << "inserisci il prezzo del prodotto" <<endl;
        cin >> prezzo;
    } while (prezzo <= 0);


    if (pezzi >= 10){
        sconto = 10;
    }
    else {
        sconto = 0;
    }

    somma= prezzo * pezzi * (100 - sconto) / 100;
    cout << somma << endl;

    return 0;
}
