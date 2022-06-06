#include <iostream>
using namespace std;


bool IsVocale(char c){
    c = tolower(c); //funzione per rendere minuscolo il carattere
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}


/**
 *
 * @param s stringa da controllare
 * @param c carattere selezionato (V per vocali e C per consonanti)
 * @return il numero di vocali o consonanti
 */
int contaLettere (string s, char c)
{
    int contatore = 0;
        for (int i = 0; i < s.size(); ++i) { // variabile.funzione chiamata su di essa
            if (c == 'V' && IsVocale(s.at(i))){
                contatore++;
            }
            if (c == 'C' && !IsVocale(s.at(i))){
                contatore++;
            }

        }
    return contatore;

}


int main() {
    /*
    string parola = "ciao";
    char selez;
    cout << "inserisci la parola" << endl;
    cin >> parola;
    cin >> selez;
    cout << contaLettere(parola, selez);
     */

    cout << contaLettere("Abete", 'V') << endl;
    cout << contaLettere("abete", 'C') << endl;

    return 0;
}
