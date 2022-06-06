#include <iostream>
using namespace std;

bool Isletter (string s, char lettera){
    for (int i = 0; i < s.size(); ++i) {
        if (s.at(i) == lettera){
            return true;
        }
    }
    return false;
}

int RepeatedLetter (string s, char lettera){
    int contatore = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s.at(i) == lettera){
            contatore++;
        }
    }
    return contatore;
}

string CancelledLetter (string s, char lettera) {
    for (int i = 0; i < s.size(); ++i) {
        if (s.at(i) == lettera) {
            s.at(i) = '*';
        }
    }
    return s;
}

int main() {
    string parola;
    char lettera;
    cin >> parola;
    cin >> lettera;
    if (Isletter(parola, lettera)){
        cout << "La lettera è presente " << RepeatedLetter(parola, lettera) << " volte" << endl;
        cout << "Stringa corretta: " << CancelledLetter(parola, lettera) << endl;

    } else{
        cout << "lettera non presente" << endl;
    }
    return 0;
}
