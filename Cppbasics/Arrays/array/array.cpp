#include <iostream>
using namespace std;

int main() {
    //dichiarazione vettore
    //prima il tipo poi il nome con le stesse regole delle variabili
    //infine coppia di parentesi quadre con dimensione vettore
    const int NUM_MESI = 12;
    int mm_pioggia[NUM_MESI];

    for (int i = 0; i < NUM_MESI; ++i) {
        cout << "inserisci i millimetri del mese " << i + 1 <<endl;
        cin >> mm_pioggia[i];
        //mm_pioggia[i] = rand() % 100; //per fare più in fretta

    }

    int somma = 0;
    for (int i = 0; i < NUM_MESI; ++i) {
        somma += mm_pioggia[i];
    }
    int media = somma/NUM_MESI;

    for (int i = 0; i < NUM_MESI; ++i) {
        if (mm_pioggia[i] > media)
            cout << "nel mese " << i + 1 << " ha piovuto piu' della media " << endl;
    }

    return 0;
}