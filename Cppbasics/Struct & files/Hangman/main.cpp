#include <iostream>
using namespace std;

string inizializza (string s){
    string t;
    for (int i = 0; i < s.size(); ++i) {
        t += '_';

    }
    return t;
}

/**
 * inserisce la lettera se indovinata nella stringa corrente
 * @param segreta
 * @param corrente
 * @param lettera
 */
bool controlloParola (const string &segreta, string &corrente, char lettera){
    bool verifica = false;
    for (int i = 0; i < segreta.size(); ++i) {
        if (segreta.at(i) == lettera) {
            corrente.at(i) = lettera;
            verifica = true;
        }
    }
    return verifica;
}


int main() {
    const int MAX_ERRORI = 7;
    bool indovinata = false;
    int errori = 0;
    //quà sarà da sostituire con l'input del giocatore
    string segreta = "tavolo";
    int scelta = 1;

    while (scelta != 0) {
        cout << "----------------------------" << endl;
        cout << "Inserisci la parola da indovinare" << endl;
        cin >> segreta;
        string corrente = inizializza(segreta);

        for (int i = 0; i < 10; ++i) {
            cout << endl;
        }

        while (!indovinata && errori < MAX_ERRORI) {
            //visualizzazione
            cout << corrente << endl << "finora hai fatto " << errori << " errori" << endl;
            //Input
            cout << "Proponi una lettera: ";
            char lettera;
            cin >> lettera;
            //controllo
            bool trovata = controlloParola(segreta, corrente, lettera);
            if (!trovata) {
                errori++;
            }
            if (segreta == corrente) {
                indovinata = true;
            }
        }

        if (errori >= MAX_ERRORI) {
            cout << "Hai perso!" << endl;
        } else {
            cout << endl << "__________" << endl << "Hai vinto!" << endl << "__________" << endl;
        }

        cout << "Premi 0 per uscire oppure qualsiasi altra cosa per continuare" << endl;
        cin >> scelta;
        errori = 0;

    }
    return 0;
}
