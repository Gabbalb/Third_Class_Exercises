#include <iostream>
using namespace std;
const int DIM = 100;

void leggi_m(int m[][DIM], int riga, int colonna){
    cout << "inserisci i valori della matrice" << endl;
    for (int i = 0; i < riga; ++i) {
        for (int j = 0; j < colonna; ++j) {
            cin >> m[i][j];
        }
    }
}

void stampa_m(int m[][DIM], int dim, int colonna){
    for (int i = 0; i < dim; ++i) {
        for (int j = 0; j < colonna; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int somma_m(int m[][DIM], int dim ,int colonna , int &index){
    long long int somma_max = -1000000000000000;
    int somma = 0;
    for (int i = 0; i < dim ; ++i) {
        for (int j = 0; j < colonna; ++j) {
            somma += m[i][j];
        }
        if (somma >= somma_max){
            somma_max = somma;
            index = i;
        }
        somma = 0;
    }
    return somma_max;
}

int main() {
    int m[DIM][DIM];
    int riga, colonna;
    int index = 0;
    cout << "inserisci le dimensioni della marice" << endl;
    cin >> riga;
    cin >> colonna;
    leggi_m(m, riga, colonna);
    stampa_m(m, riga, colonna);
    int somma= somma_m(m, riga, colonna, index);
    cout << "la somma massima è: " << somma << " ed è alla riga " << index + 1 << endl;

    return 0;
}
