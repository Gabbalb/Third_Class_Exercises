#include <iostream>

using namespace std;

int main() {
    //esempio di utilizzo di uno switch per stabilire il numero di giorni di un mese
    int mese;

    do {
        cout <<"inserisci il numero del mese che ti interessa" << endl;
        cin >> mese;
    }while (mese > 12);

    switch (mese){
        case 2: //case punto di ingresso in cui se compara il codice entra e va avanti
            cout << "il mese ha 28 giorni" <<endl;
            break; //punto di uscita
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "il mese ha 30 giorni"<<endl;
            break;
        default:
            cout << "il mese ha 31 giorni" <<endl;
    }
    return 0;
}
