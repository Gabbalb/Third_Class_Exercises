#include <iostream>
using namespace std;

int Anno (string anno){
   int decennio = stoi(anno);
   if (decennio > 22){
       decennio += 1900;
   } else
       decennio += 2000;
    return decennio;
}

int Mese (char mese){
    switch (mese) {
        case 'a':
            return 1;
        case 'b':
            return 2;
        case 'c':
            return 3;
        case 'd':
            return 4;
        case 'e':
            return 5;
        case 'h':
            return 6;
        case 'l':
            return 7;
        case 'm':
            return 8;
        case 'p':
            return 9;
        case 'r':
            return 10;
        case 's':
            return 11;
        case 't':
            return 12;
    }
}

int Giorno (string giorno){
    int day = stoi(giorno);
    if (day > 31){
        return day-40;
    }
    return day;
}

bool IsFemale (string giorno){
    int day = stoi(giorno);
    if (day > 31){
        return true;
    }
    return false;
}


int main() {
    string codice;
    cin >> codice;
    for (int i = 0; i < codice.size(); ++i) {
        codice.at(i) = tolower(codice.at(i));
    }

    string cognome = codice.substr(0, 3);
    string nome = codice.substr(3, 3);
    string anno = codice.substr(6, 2);
    char mese = codice.at(8);
    string giorno = codice.substr(9, 2);
    string comune = codice.substr(12, 4);
    char controllo = codice.at(15);

    string sesso;
    if (IsFemale(giorno)){
        sesso = "Femmina";
    } else
        sesso = "Maschio";

    //OUT
    cout << "Cognome: " << cognome << endl;
    cout << "Nome: " << nome << endl;
    cout <<"Data di nascita: "<< Giorno(giorno) << "/" << Mese(mese) << "/" << Anno(anno) << endl;
    cout << "Sesso: " << sesso;
    return 0;
}
