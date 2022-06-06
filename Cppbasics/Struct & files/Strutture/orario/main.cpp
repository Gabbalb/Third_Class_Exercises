#include <iostream>

using namespace std;

struct Orario{
    int ore;
    int minuti;
    int secondi;
};

Orario diff (Orario a, Orario b){
    int secondi_a = a.secondi;
    int secondi_b = b.secondi;
    secondi_a += (a.minuti * 60);
    secondi_b += (b.minuti * 60);
    secondi_a += (a.ore * 3600);
    secondi_b += (b.ore * 3600);

    int diff = 0;

    if (secondi_b > secondi_a){
        diff = secondi_b - secondi_a;
    } else{
        diff = secondi_a - secondi_b;
    }

    Orario differenza;
    differenza.ore = 0;
    differenza.minuti = 0;
    differenza.secondi = 0;

    differenza.ore = diff/3600;
    diff -= differenza.ore * 3600;
    differenza.minuti = diff/60;
    diff -= differenza.minuti * 60;
    differenza.secondi = diff;

    return differenza;

}

void Read (Orario &a){
    cout << "inserisci le ore: " << endl;
    cin >> a.ore;
    cout << "inserisci i minuti: " << endl;
    cin >> a.minuti;
    cout << "inserisci i secondi: " << endl;
    cin >> a.secondi;
}

void scrivi (Orario ora){
    cout << ora.ore << ":"<< ora.minuti << ":"<< ora.secondi << endl;
}
int main() {
    Orario c;
    Orario b;
    Read(c);
    Read(b);
    cout << "la differenza è di "<< endl;
    scrivi(diff(c, b));

    return 0;
}
