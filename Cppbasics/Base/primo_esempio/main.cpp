#include <iostream>
using namespace std;

//definizione di una funzione
//va definita fuori dal main
//si sceglie il nome che spiega come e cosa fa la funzione
//le regole dei nomi sono come per i nomi di variabile
//poi si scelgono i parametri e il loro tipo
//infine si sceglie il tipo del valore di ritorno (ad esempio y)

/*la firma della funzione; ogni parametro anche se dello stesso tipo ognuno deve avere il suo tipo davanti*/
/**
 * questa funzione ha una retta f(x) = mx + q
 * x,m,q sono parametri formali pk nn hanno valori concreti ma servono solo a definire cosa fa la funzione (non svolgono alcuna azione)
 * @param x variabile indipendente
 * @param m coeff_angolare
 * @param q intercetta
 * @return
 */
float retta(float x, float m, float q)
{
    //corpo della funzione
    // possiamo dichiarare tutte le variabili che ci servono
    float y = m*x + q; //calcolo
    //ritorniamo il risultato
    return y;
}

float potenza_esponente_int(float base, int exp){
    //assumiamo solo esponenti positivi
    float risultato = 1;
    for (int i = 0; i < exp; ++i) {
        risultato *= base;
    }
    return risultato;
}

int main() {
    float y; //diversa dall'altro valore della funzione
    y = retta(0, 3, 2);//parametri attuali (con valori concreti come numeri o variabili), per scrivere l'importante l'ordine non il nome (a seconda di come scrivo la formula);

    float coeff_ang, intercetta;
    cout << "inserisci il coeff angol della retta" << endl;
    cin >> coeff_ang;
    cout << "inserisci intercetta";
    cin >> intercetta;

    float x = -1;
    while (x < 1) {
        cout << retta( x, coeff_ang, intercetta) << endl;
        x += 0.1;
    }
    cout << y << endl;

    cout << "3 elevato alla 4 vale" << endl;
    cout << potenza_esponente_int (3, 4);
    return 0;
}


