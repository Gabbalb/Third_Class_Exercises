#include <iostream>

using namespace std;

const int N = 3;

/**
 * Resetta la matrice mettendo tutto a 0
 * @param m griglia del tris
 * @param r numero di righe (sempre 3)
 */

void resetta (int m[][N], int r){
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < N; ++j) {
            m[i][j] = 0;
        }
    }
}

/**
 *
 * @param n numero giocatore
 * @return carattere "x" "o" o " " a seconda del giocatore
 */
char mappa_caratteri (int n) {
    if (n == 0)
        return ' ';
    else if (n == 1)
        return 'o';
    else if (n == 2)
        return 'x';
}

/**
 * Stampa la matrice
 * @param m griglia del tris
 * @param r numero righe (sempre 3)
 *
 */
void stampa (int m[][N], int r){
    for (int i = 0; i < r; ++i) {
        cout << mappa_caratteri(m[i][0]) << " ";
        for (int j = 1; j < N; ++j) {
            cout << "| "<< mappa_caratteri(m[i][j]) << " ";
        }
        cout << endl;
        if (i < 2)
            cout << "---------" << endl;
    }
}
/**
 * controllo inserimento
 * @param m griglia
 * @param r riga matrice
 * @param riga riga
 * @param colonna colonna
 * @param giocatore numero giocatore
 * @return se si può inserire in quella casella
 */
bool inserisci(int m[][N], int r, int riga, int colonna, int giocatore){
    if (riga < 0 || riga >= r || colonna < 0 || colonna >= N || m[riga][colonna] != 0)
        return false;
    m[riga][colonna] = giocatore;
        return true;
}

void cambia_giocatore(giocatore)

int main() {
    int tris[N][N];
    int giocatore = 1;
    //resetto la tabella
    resetta(tris, N);
    //stampa
    stampa(tris, N);

    while(1){
        int riga, colonna;
        cout << "inserisci la riga: ";
        cin >> riga;
        cout << "inserisci la colonna: ";
        cin >> colonna;
        while (!inserisci(tris, N, riga - 1, colonna-1, giocatore)){
            cout << "Hai sbagliato, rifai!" << endl;
            cout << "inserisci la riga: ";
            cin >> riga;
            cout << "inserisci la colonna: ";
            cin >> colonna;
        }
        stampa(tris, N);
    }

    //stampo per verificare
    stampa(tris, N);
    //


    return 0;
}
