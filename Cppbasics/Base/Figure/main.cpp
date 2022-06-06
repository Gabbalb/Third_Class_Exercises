#include <iostream>

using namespace std;

int main() {
   int n;
   cout << "inserisci IL LATO DEL ROMBO: " <<endl;
   cin >> n;
   int lunghezza_riga = 1;
   int lunghezza_spazi = n - 1;

   //input utente
    for (int j = 0; j < n; ++j) {
        //disegna una linea di spazi
        for (int i = 0; i < lunghezza_spazi; ++i) {
            cout << " ";
        }

        //disegna una linea di asterischi
        for (int i = 0; i < lunghezza_riga; ++i) {
            cout << "*";
        }

        lunghezza_riga += 2;
        lunghezza_spazi--;
        cout <<endl;
    }
    lunghezza_spazi = 1;
    lunghezza_riga -= 4; //4 perchè la riga centrale è una sola e devo eliminare l'ultimo incremento
    //parte che discegna la parte sotto del rombo
    for (int j = 0; j < n - 1; ++j) {
        //disegna una linea di spazi
        for (int i = 0; i < lunghezza_spazi; ++i) {
            cout << " ";
        }

        //disegna una linea di asterischi
        for (int i = 0; i < lunghezza_riga; ++i) {
            cout << "*";
        }

        lunghezza_riga -= 2;
        lunghezza_spazi++;
        cout <<endl;
    }


    return 0;
}
