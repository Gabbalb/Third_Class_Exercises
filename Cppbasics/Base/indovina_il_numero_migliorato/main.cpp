#include <iostream>
#include <ctime>


using namespace std;

int main() {
    srand(time(NULL));
    int const MAX_UNO = 6;
    int const MAX_DUE = 6;
    int puntata=0;
    int credito=0;
    int target;
    int esci = 1;

    while (esci != 0) {

        int numero = (rand() % MAX_UNO + 1) + (rand() % MAX_DUE + 1);
        cout << "il numero prodotto è: " << numero << endl;
        cout << "inserisci la tua puntata:" << endl;
        cin >> puntata;
        credito = puntata;

        if (numero == 11 || numero == 7) {
            cout << "hai vinto!";
            credito += puntata;
        } else if (numero <= 3 || numero == 12) {
            cout << "hai perso" << endl;
            credito -= puntata;
        } else {
            target = numero;
            numero = (rand() % MAX_UNO + 1) + (rand() % MAX_DUE + 1);
            cout << "il numero prodotto è: " << numero << endl;
            while (numero != target && numero != 7) {
                numero = (rand() % MAX_UNO + 1) + (rand() % MAX_DUE + 1);
                cout << "il numero prodotto è: " << numero << endl;

            }
            if (numero = target) {
                credito += puntata;
                cout << "hai vinto il tuo credito è: " << credito << endl;
                cout << "per uscire scrivi 0 oppure scrivi qualcos' altro se vuoi continuare: " <<endl;
                cin >> esci;

            } else {
                credito -= puntata;
                cout << "hai perso il tuo credito è: " << credito << endl;
                cout << "per uscire scrivi 0 oppure scrivi qualcos' altro se vuoi continuare: " <<endl;
                cin >> esci;

            }
        }
    }
    return 0;
}
