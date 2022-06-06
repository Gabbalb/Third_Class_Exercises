#include <iostream>

using namespace std;

int main() {
    int a = 7, b = 5;
    //if semplice
    if (a > b) //no punto e virgola pk ; indica la fine di un istruzione -> quindi chiude l'if e quello nel blocco sotto
        //verrebbe scritto cmq tutto senza condizioni

    { // faccio blocchi per fare capire che sono tutte istruzioni riguardanti l'if
        cout << "a è maggiore di b" << endl;
        cout << "la condizione quindi era vera" << endl;
    }
    //if - else
    if (a < b) //no punto e virgola pk ; indica la fine di un istruzione -> quindi chiude l'if e quello nel blocco sotto
        //darebbe errore perchè c'è l'else senza niente
    {
        cout << "a è minore di b" << endl;
        cout << "quindi la condizione a < b è vera" << endl;

    }
    else //false
    {
        cout << "a non è minore di b" << endl;
        cout << "quindi la condizione a < b è falsa" << endl;
    }

    //ciclo while
    while (a >= b && b > 0 || a > 0) //end ha priorità su or
    {
        cout << a << " - " << b << endl;
        a = a - 1;
    }


    return 0;
}
