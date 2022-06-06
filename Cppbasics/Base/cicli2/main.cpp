/*
 * problema della piegatura della lastra di metallo
 * per ottenere il volume maggiore
 */

#include <iostream>

using namespace std;

int main() {
    float larghezza, altezza; //Dimensioni della lastra : input
    float lato; //lato del quadrato di taglio
    float volume, volumeMax, latoMax;
    //inizializzazione del problema
    cout << "inserisci la dimensione in cm del lato corto" << endl;
    cin >> larghezza;
    cout << "inserisic la dimensione in cm del lato lungo" << endl;
    cin >> altezza;
    //il lato iniziale è quando non c'è il quadrato
    lato=0;
    volume=0;
    volumeMax= volume;
    latoMax=0;
    while (lato < larghezza/2) //ciclo indeterminato
    {
        lato += 0.1; //forma breve di (lato = lato + 0.1;)
        volume =  (larghezza - 2*lato)*(altezza - 2*lato)*lato;
        if (volume > volumeMax)
        {
            volumeMax = volume;
            latoMax = lato;
        }
    }
    cout << "utilizzando un lato di " << latoMax<< " cm otterrai un volume max di " << volumeMax << "cm cubici" <<endl;



    return 0;
}
