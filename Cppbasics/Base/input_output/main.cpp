//Prima parte che include le direttive al preprocessore
//In particolare questa direttiva, la include,
//include le librerie da importare
#include <iostream> //Libreria per l' I/O

//Riga che aggiungeremo tutte le volte per evidtare di aggiundere per esempio sdt: tutte le volte

using namespace std;

//Punto in cui inizierà il programma
//in main contiene sempre un blocco di codice
//delimitato dalle parentesi graffe (AltGr + Shift + [)

int main() {
    int a; //dichiarazione variabili, int (intero), float (reale), double(più preciso)
    float b;
    double c;
    //input della variabile intera
    cout << "Inserisci un numero intero";   //Output = cout (frecce indicano direzione) << (verso il video) >>(verso il computer)
    cin >> a; //inserisci a
    cout << "il numero che hai inserito è il " << a <<  endl; //endl == a capo
    //numero con virgola
    cout << "inserisci un numero con virgola";
    cin >> b;
    cout << "in numero inserito è " << b << endl;

    return 0;
}
