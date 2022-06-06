#include <iostream>
#include <ctime>
using namespace std;
const int DIM = 5;

void genera_m (int m[][DIM], int dim){
    srand(time(NULL));
    for (int i = 0; i < dim; ++i) {
        for (int j = 0; j < dim; ++j) {
            m[i][j] = rand()%10 + 1;
        }
    }
}

void stampa_m( int m[][DIM], int dim){
    for (int i = 0; i < dim; ++i) {
        for (int j = 0; j < dim; ++j) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

bool verifica_m( int m[][DIM], int dim){
    for (int i = 0; i < dim; ++i) {
        for (int j = 0; j < dim; ++j) {
            if (i%2 == 0){
                if (m[i][j]%2 != 0){
                    return false;
                }
            } else {
                if (m[i][j]%2 == 0){
                    return false;
                }
            }
        }
    }
    return true;
}


int main() {
    int m[DIM][DIM];
    int dim;
    cout << "inserisci le dimensioni della matrice" << endl;
    do {
        cin >> dim;
    } while (dim > 5);
    char var = 'e';

    while (1) {
        genera_m(m, dim);
        stampa_m(m, dim);
        if (verifica_m(m, dim)) {
            cout << "la condizione è rispettata" << endl;
        } else{
            cout << "la condizione non è rispettata" << endl;
        }

        cout << "Vuoi continuare? se sì pigia qualsiasi lettera se no premi q" << endl;
        cin >> var;

        if (var == 'q'){
            break;
        }
    }


    return 0;
}
