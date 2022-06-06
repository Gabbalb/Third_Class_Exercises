#include <iostream>
#include <ctime>
using namespace std;
const int FIUMI = 5, CITTA = 10;

void mappatura(int m[FIUMI][CITTA]) {
    srand(time(NULL));
    for (int i = 0; i < FIUMI; ++i) {
        for (int j = 0; j < CITTA; ++j) {
            m[i][j] = rand()%2;
        }
    }
}


void stampa_mappa(int m[FIUMI][CITTA]){
    for (int i = 0; i < FIUMI; ++i) {
        for (int j = 0; j < CITTA; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}

void citta_wet(int m[FIUMI][CITTA], int fiume){
    for (int i = 0; i < CITTA; ++i) {
        if (m[fiume][i] == 1){
            cout << i << " è una città bagnata dal fiume " << fiume << endl;
        }
    }
}

void fiume_wet(int m[FIUMI][CITTA], int citta){
    for (int i = 0; i < FIUMI; ++i) {
        if (m[i][citta] == 1){
            cout << i << " bagna la città  " << citta << endl;
        }
    }
}

void city_more_wet(int m[FIUMI][CITTA]){
    int somma_max = -1;
    int somma = 0;
    int citta = -1;
    for (int i = 0; i < CITTA; ++i) {
        for (int j = 0; j < FIUMI; ++j) {
            somma += m[i][j];
        }
        if (somma > somma_max){
            somma_max = somma;
            citta = i;
        }
        somma = 0;
    }
    cout << "la città più bagnata è la città: " << citta << endl;
}

void magg3fiumi (int m[FIUMI][CITTA]){
    int somma = -1;
    int citta;
    for (int i = 0; i < CITTA ; ++i) {
        for (int j = 0; j < FIUMI; ++j) {
            somma += m[i][j];
        }
        if (somma > 3){
            cout << "bagnata da più di 3 fiumi è " << i << endl;
        }
        somma = 0;
    }

}



int main() {
    int m[FIUMI][CITTA];
    int fiume;
    int citta;
    mappatura(m);
    stampa_mappa(m);
    cout << "inserisci il fiume da controllare " << endl;
    cin >> fiume;
    citta_wet(m,fiume);
    cout << "inserisci la città da controllare " << endl;
    cin >> citta;
    fiume_wet(m, citta);
    city_more_wet(m);
    magg3fiumi(m);

    return 0;
}
