#include <iostream>
#include <ctime>
using namespace std;


//funzioni
void genera_vett( int v[], int dim){
    srand(time(NULL));
    for (int i = 0; i < dim; ++i) {
        v[i] = rand()%100;
    }
}

void stampa_vett( int v[], int dim){
    for (int i = 0; i < dim; ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int conta_m4(int v[], int dim, int &index){
    int qta = 0;
    for (int i = 0; i < dim; ++i) {
        if (v[i]%4 == 0){
            qta++;
            if (qta == 1) {
                index = i;
            }
        }
    }
    return qta;
}

int scambia_m4(int v[], int dim, int index){
    int flag;
    flag = v[0];
    v[0] = v[index];
    v[index] = flag;
}


int main() {
    const int DIM = 10;
    int v[DIM];
    int index = 0;
    genera_vett(v, DIM);
    stampa_vett(v, DIM);
    if (conta_m4(v, DIM, index) != 0){
        cout << " Ci sono " <<conta_m4(v, DIM, index) << " numeri divisibili per 4 nel vettore" << endl;
        cout << "Il primo si trova in posizione " << index << endl;
        scambia_m4(v, DIM, index);
        stampa_vett(v, DIM);
    } else {
        cout << "Nessun numero divisibile per 4 disponibile" << endl;
    }
    return 0;
}
