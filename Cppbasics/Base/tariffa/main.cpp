#include <iostream>
using namespace std;
int main() {
    float prezzo = 15.90;
    char condizione, sconto;
    cout << "usufruisci di uno sconto? Y:sì N:no" <<endl;
    cin >> sconto;
    if (sconto == 'Y') {
        cout << "inserisci la tua condizione se P o D o S: " <<endl;
        cin >> condizione;
        switch (condizione) {
            case 'P':
                prezzo -= prezzo * 0.1;
                cout << "il prezzo è: " << prezzo << endl;
                break;
            case 'S':
                prezzo -= prezzo * 0.15;
                cout << "il prezzo è: " << prezzo << endl;
                break;
            case 'D':
                prezzo -= prezzo * 0.25;
                cout << "il prezzo è: " << prezzo << endl;
                break;


        }
    } else {
        cout << "il biglietto è di: " << prezzo <<endl;
    }
    return 0;
}
