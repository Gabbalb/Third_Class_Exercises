#include <iostream>

using namespace std;

int main() {
    int numero_bit, bit;
    int decimale = 0;
    int potenza = 1;
    cout << "quanti bit vuoi";
    cin >> numero_bit;
    cout << "inserisci il numero di bit totali in ordine da destra a sinistra" <<endl;
    for (int i = 0; i < numero_bit; ++i) {
        do{
            cout << "bit" << i << " ";
            cin >> bit;
        } while (bit != 0 && bit != 1);
        decimale = decimale + potenza * bit;
        potenza = potenza*2;
    }
    cout << "il numero decimale è: " << decimale << endl;
    return 0;
}
